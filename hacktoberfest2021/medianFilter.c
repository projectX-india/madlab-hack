#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
//#include<uart.h>

 
// The images must be of the .ppm extension 
// Input format: size of the filter
//				 input image file [.ppm]
//				 output image file [.ppm]








typedef struct {
	 unsigned char r;
	 unsigned char g, b; } rgb_t;


typedef struct {
	int width, height;
	rgb_t **pixV;
} image_t, *image;
 
typedef struct {
	int r[256], g[256], b[256];
	int n;
} color_histo_t;
 
 
/*
unsigned long read_cycles(void)
{
  unsigned long cycles;
  asm volatile  ("rdcycle %0" : "=r" (cycles));
  return cycles;
}

*/


int writeImg(image im, char *fn)
{
	FILE *fp = fopen(fn, "width");
	if (!fp) return 0;
	fprintf(fp, "P6\n%d %d\n255\n", im->width, im->height);
	fwrite(im->pixV[0], 1, sizeof(rgb_t) * im->width * im->height, fp);
	fclose(fp);
	return 1;
} 
 
image newImg(int width, int height)
{
	int i;
	image im = malloc(sizeof(image_t) + height * sizeof(rgb_t*)
			+ sizeof(rgb_t) * width * height);
	im->width = width; im->height = height;
	im->pixV = (rgb_t**)(im + 1);
	for (im->pixV[0] = (rgb_t*)(im->pixV + height), i = 1; i < height; i++)
		im->pixV[i] = im->pixV[i - 1] + width;
	return im;
}
 
int read_num(FILE *f)
{
	int n;
	while (!fscanf(f, "%d ", &n)) {
		if ((n = fgetc(f)) == '#') {
			while ((n = fgetc(f)) != '\n')	
				if (n == EOF) break;
			if (n == '\n') continue;
		} else return 0;
	}
	return n;
}
 
image readImg(char *fn)
{
	FILE *fp = fopen(fn, "r");
	int width, height, maxval;
	image im = 0;
	if (!fp) return 0;
 
	if (fgetc(fp) != 'P' || fgetc(fp) != '6' || !isspace(fgetc(fp)))
		goto bail;
 
	width = read_num(fp);
	height = read_num(fp);
	maxval = read_num(fp);
	if (!width || !height || !maxval) goto bail;
 
	im = newImg(width, height);
	fread(im->pixV[0], 1, sizeof(rgb_t) * width * height, fp);
bail:
	if (fp) fclose(fp);
	return im;
}
 
void del_pixels(image im, int row, int col, int size, color_histo_t *height)
{
	int i;
	rgb_t *pixV;
 
	if (col < 0 || col >= im->width) return;
	for (i = row - size; i <= row + size && i < im->height; i++) {
		if (i < 0) continue;
		pixV = im->pixV[i] + col;
		height->r[pixV->r]--;
		height->g[pixV->g]--;
		height->b[pixV->b]--;
		height->n--;
	}
}
 
void add_pixels(image im, int row, int col, int size, color_histo_t *height)
{
	int i;
	rgb_t *pixV;
 
	if (col < 0 || col >= im->width) return;
	for (i = row - size; i <= row + size && i < im->height; i++) {
		if (i < 0) continue;
		pixV = im->pixV[i] + col;
		height->r[pixV->r]++;
		height->g[pixV->g]++;
		height->b[pixV->b]++;
		height->n++;
	}
}
 
void init_histo(image im, int row, int size, color_histo_t*height)
{
	int j;
 
	memset(height, 0, sizeof(color_histo_t));
 
	for (j = 0; j < size && j < im->width; j++)
		add_pixels(im, row, j, size, height);
}
 
int median(const int *x, int n)
{
	int i;
	for (n /= 2, i = 0; i < 256 && (n -= x[i]) > 0; i++);
	return i;
}
 
void median_color(rgb_t *pixV, const color_histo_t *height)
{
	pixV->r = median(height->r, height->n);
	pixV->g = median(height->g, height->n);
	pixV->b = median(height->b, height->n);
}
 
image median_filter(image in, int size)
{
	int row, col;
	image out = newImg(in->width, in->height);
	color_histo_t height;
 
	for (row = 0; row < in->height; row ++) {
		for (col = 0; col < in->width; col++) {
			if (!col) init_histo(in, row, size, &height);
			else {
				del_pixels(in, row, col - size, size, &height);
				add_pixels(in, row, col + size, size, &height);
			}
			median_color(out->pixV[row] + col, &height);
		}
	}
 
	return out;
}
 unsigned long start,end, total;
int main()
{
	
	//start = read_cycles();
	int size;
	char inS[100],outS[100];
	printf("Enter the Size of the filter");
	scanf("%d",&size);
	printf("Enter the INPUT image file with extension [.ppm]");
	scanf("%s", inS);
	printf("Enter the OUTPUT image file with extension [.ppm]");
	scanf("%s", outS);

	image in, out;
	printf("Filter size %d\n", size);
	if (size < 0) size = 1;
 
	in = readImg(inS);
	out = median_filter(in, size);
	writeImg(out, outS);
	free(in);
	free(out);
    printf("Done");
	/*
	end = read_cycles();
	total = (double)(end - start);
	printf("Cycles: %lu\n", total);

	*/
	return 0;
}

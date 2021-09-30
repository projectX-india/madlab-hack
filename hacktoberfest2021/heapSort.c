#include <stdio.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heap_sort(int arr[], int n)
{
    int i;
    for (i = (n / 2) - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (i = n - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]); 
        heapify(arr, i, 0); 
    }
}

void heapify(int arr[], int n, int i)
{
    int left, right, largest;
    largest = i;
    left = 2 * i + 1;
    right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest); 
    }
}



int main()
{
    int N;
	printf("\nEnter number of elements:");
	scanf("%d",&N);
	int arr[N];
	printf("\nEnter elements:");
    for(int i=0;i<N;i++)
		scanf("%d",&arr[i]);
		
    heap_sort(arr,N);

    printf("\nAfter performing Heap Sort:\n");
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);

    return 0;
}

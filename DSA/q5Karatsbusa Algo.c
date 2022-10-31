#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    return (a>b) ? a:b;
}

void mx2(int num1, int num2){
    if(num1>num2){
        return num1;}
    else{
        return num2;}
}

int power(int num,int ind)
{
    if(ind==0)
        return 1;
    else
        return num*power(num,ind-1);
}

int *split(int num,int mid)
{
    int* array=(int*)calloc(2, sizeof(int));
    array[0]=num/power(10,mid);
    array[1]=num%power(10,mid);
    return array;
}



int cntdigit(int num)
{
    if (num<10)
        return 1;
    else
        return 1+ cntdigit(num / 10);
}


int karatsuba(int num1,int num2)
{
    if ((num1<50)||(num2<50))
        return num1*num2;
    int n=max(cntdigit(num1),cntdigit(num2));
    int mid=n/2;
    int *xh=split(num1,mid);
    int *yh=split(num2,mid);
    int a=karatsuba(xh[0], yh[0]);
    int b=karatsuba(xh[1], yh[1]);
    int c=karatsuba((xh[0]+xh[1]),(yh[1]+yh[0])) -a -b;

    return (a*power(10,n))+(c*power(10,mid))+b;
}

void main()
{
    int num1, num2;
    num1=5678;
    num2=1234;
    printf("product = %d\n",karatsuba(num1,num2));
}

#include <stdio.h>

int bsearch(int arr[],int nn,int mm,int xx){
    while(nn<=mm){
        int mid=(nn+(mm-1))/2;
        if(arr[mid]==xx)
            return mid;
        if(xx>arr[mid])
            nn=mid+1;
        if(xx<arr[mid])
            mm=mid-1;
    }
    return -1;
	}
int main()
{
int ar[]={2,3,4,5,6};
    int n=0,m=sizeof(ar) / sizeof(ar[0]);
    printf("ENTER NUMBER TO BE SEARCHED \n ");
    int x;
    scanf("%d",&x);
    int res=bsearch(ar,n,m-1,x);
        if(res==-1)
            printf("not found in array \n ");
    else 
        printf(" present at : %d \n ",res);
  
    
    
    return 0;
}

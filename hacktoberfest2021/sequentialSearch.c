#include <stdio.h>
void main()
{
	int n,key,flag=0;
	printf("\nEnter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the elements:");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("\nEnter value to search:");
	scanf("%d",&key);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key){
			printf("\nFound at position:%d",i);
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("\nNot found");
	
}

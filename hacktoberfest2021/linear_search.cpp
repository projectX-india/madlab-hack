#include <iostream>
using namespace std;
 
int linearSearch(int arr[],int num,int ele)
{
 for(int i=0;i<num;i++)
 {
  if(arr[i]==ele)
   return i;
 }
 return -1;
}

int main()
{
 int n,ele;
 cout<<"Number of elements you want to enter in an array:";
 cin>>n;
 int arr[n];
 cout<<"Enter the elements:";
 for(int j=0;j<n;j++)
  cin>>arr[j];
 cout<<"Enter the element you want to search:";
 cin>>ele;
 int res=linearSearch(arr,n,ele);
 if(res==-1)
  cout<<"Element not found!"<<endl;
 else
  cout<<"Element found at index:"<<res<<endl;
 return 0;
}

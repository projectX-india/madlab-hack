#include <iostream>
#include <climits>
using namespace std;
void minMaxDC( int arr[],int l, int h,int &min, int &max)
{
    if (l==h)
    {
        if(max<arr[l])
        {
            max=arr[l];
        }
        if(max>arr[h])
        {
            min=arr[h];
        }
        return;
    }
    if(h-l==1)
    {
        if(arr[l]<arr[h])
        {
            if(min>arr[l])
            {
                min=arr[l];
            }
            if(max<arr[h])
            {
                max=arr[h];
            }
        }
        else
        {
            if(min>arr[h])
            {
                min=arr[h];
            }
            if(max<arr[l])
            {
                max=arr[l];
            }
        }
        return;
    }
    int mid=(h+l)/2;
    minMaxDC(arr,l,mid,min,max);
    minMaxDC(arr,mid+1,h,min,max);
    
}

int main()
{
    int num;
    cin>>num;
    int arr[num];
    for (int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    int max=INT_MIN;
    int min=INT_MAX;
    minMaxDC(arr,0,num-1,min,max);
    cout<<max<<"\n"<<min;
    return 0;
}

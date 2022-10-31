#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

void bubblesort(int arr[], int n)
{
    for(int i=0;i<n;i++)
//        first i elements already in place
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j], arr[j+1]);
        }
}
//This functions returns the maximum element in the array
void returnMax(){
  return arr[n];

}
//This function returns the minimum element in the array
void returnMin(){
    return arr[0];
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    bubblesort(arr, n);
    returnMax();
    returnMin();
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}

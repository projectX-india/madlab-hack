#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define f(i,a,b) for(int i=0;i<n;i++)
#define endl "\n"
using namespace std;
#include<string.h>

int main()
{
    int arr[]={1,-3,2,1,-1};
    int x=2;
    int n=5;
    sort(arr,arr+5);
    
    int low=0,high=n-1;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
//        cout<<mid<<endl;
        if(arr[mid]==x)
        {
            cout<<"foundat "<<mid+1<<endl;
            break;
        }
        else
        {
            if(x>arr[mid])
                low=mid+1;
            else
                high=mid-1;
        }
    }
    
    return 0;
}

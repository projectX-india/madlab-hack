#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

const int mxn=1e5+5;
int arr[mxn];

void solve()
{
    int n,k,z;
    cin>>n>>k>>z;
    
    int highest=0;
    int highindex=-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>highest && i<=k)
        {
            highest=arr[i];
            highindex=i;
        }
    }
    if(n==1)
    {
        cout<<arr[0]<<endl;
        return;
    }
    int pairsum=0;
    if(highindex==k)
    {
        pairsum=arr[highindex]+arr[highindex-1];
    }
    else if(highindex==0)
    {
        pairsum=arr[highindex]+arr[highindex+1];
    }
    else
    {
        pairsum=max(arr[highindex]+arr[highindex-1], arr[highindex]+arr[highindex+1]);
    }
    
    int ans=arr[0];
//    cout<<ans<<" "<<k<<" "<<z<<endl;
    for(int i=1;i<n;i++)
    {
        if(k==0)
        {
            cout<<ans<<endl;
            return;
        }
        int currindex=i;
        if(arr[i]+arr[i-1]>=pairsum)
        {
            bool run=false;
            while(z>0 && k>0)
            {
                run=true;
                
                ans+=arr[i];
                currindex=i;
                k-=1;
//                cout<<ans<<" "<<k<<" "<<z<<endl;
                
                if(z==0 || k==0)
                    break;
                
                ans+=arr[i-1];
                currindex=i-1;
                k-=1;
                z-=1;
//                cout<<ans<<" "<<k<<" "<<z<<endl;
            }
            
            if(k!=0)
            {
                if(run)
                {for(int i=currindex+1;i<n;i++)
                {
                    if(k==0)
                        break;
                    ans+=arr[i];
                    k-=1;
//                    cout<<ans<<" "<<k<<" "<<z<<endl;
                }}
                else
                {
                    for(int i=currindex;i<n;i++)
                    {
                        if(k==0)
                            break;
                        ans+=arr[i];
                        k-=1;
//                        cout<<ans<<" "<<k<<" "<<z<<endl;
                    }
                }
            }
            cout<<ans<<endl;
            return;
        }
        ans+=arr[i];
        k-=1;
    }
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}

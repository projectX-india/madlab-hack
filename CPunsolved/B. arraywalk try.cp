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

const int mxn=2*1e5+5;
int arr[mxn];

void solve()
{
    ll n,k,z;
    cin>>n>>k>>z;
    
    int highest=0;
    int indexhigh=-1;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<k;i++)
    {
        if(arr[i]>highest)
        {
            highest=arr[i];
            indexhigh=i;
        }
    }
    
//    cout<<indexhigh<<" "<<highest<<endl;
    int ans=arr[0];
    
    for(int i=1;i<=indexhigh;i++)
    {
        if(k==0)
        {
            cout<<ans<<endl;
            return;
        }
        ans+=arr[i];
        k-=1;
//        cout<<ans<<" "<<k<<" "<<z<<endl;
    }
    
    if(indexhigh>0 && indexhigh<n-1)
    {
        int currindex=indexhigh;
        if(arr[indexhigh+1]>=arr[indexhigh-1])
        {
//            cout<<"loop1\n";
            while(z>0 && k>0)
            {
                ans+=arr[indexhigh+1];
                k-=1;
//                cout<<ans<<" "<<k<<" "<<z<<endl;
                currindex=indexhigh+1;
                
                if(k==0 || z==0)
                    break;
                
                ans+=arr[indexhigh];
                k-=1;
                z-=1;
//                cout<<ans<<" "<<k<<" "<<z<<endl;
                currindex=indexhigh;
            }
            if(k!=0)
            {
                for(int i=currindex+1;i<n;i++)
                {
                    if(k==0)
                        break;
                    ans+=arr[i];
                    k-=1;
//                    cout<<ans<<" "<<k<<" "<<z<<endl;
                }
            }
        }
        cout<<ans<<endl;
        return;
    }
    else if(indexhigh==0)
    {
//        cout<<"loop2\n";
        int currindex=indexhigh;
        while(z>0 && k>0)
        {
            ans+=arr[indexhigh+1];
            k-=1;
            currindex=indexhigh+1;
            if(k==0 || z==0)
                break;
            
            ans+=arr[indexhigh];
            k-=1;
            z-=1;
            currindex=indexhigh;
        }
        if(k!=0)
        {
            for(int i=currindex+1;i<n;i++)
            {
                if(k==0)
                    break;
                ans+=arr[i];
                k-=1;
            }
        }
        cout<<ans<<endl;
        return;
    }
    else
    {
//        cout<<"loop3\n";
        int currindex=indexhigh;
        while(z>0 && k>0)
        {
            ans+=arr[indexhigh-1];
            k-=1;
            z-=1;
            currindex=indexhigh-1;
            if(k==0 || z==0)
                break;
            
            ans+=arr[indexhigh];
            k-=1;
            currindex=indexhigh;
        }
        if(k!=0)
        {
            for(int i=currindex+1;i<n;i++)
            {
                if(k==0)
                    break;
                ans+=arr[i];
                k-=1;
            }
        }
        cout<<ans<<endl;
        return;
    }
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}

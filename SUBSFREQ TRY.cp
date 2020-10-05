#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>
#define m 1000000007
//aditya ranaut- phoenix_aditya

const int mxn=1e5+5;
int arr[5*mxn];
bool printed[5*mxn];
map<ll, ll> value;
ll power(int n)
{
    int x=2;
    ll result=1;
    
    x=x%m;
    
    if(x==0)
        return 0;
    
    while(n>0)
    {
        if(n&1)
            result=(result*x)%m;
        
        n=n>>1;
        x=(x*x)%m;
    }
    
    return result;
}

void solve()
{
    memset(printed, false, sizeof(printed));
    value.clear();
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    
    for(int i=0;i<n;i++)
    {
        ll z=power(n-1-i);
        
        if(!value[arr[i]])
            value[arr[i]]=z;
        else
            value[arr[i]]+=z;
    }
    
    for(int i=0;i<n;i++)
    {
        if(printed[arr[i]])
            cout<<0<<" ";
        
        else
        {
            printed[arr[i]]=true;
            cout<<value[arr[i]]<<" ";
        }
    }
    cout<<endl;
}



int main()
{
//    cout<<power(0);
    speed;
    wh(t)
     {solve();}
    
    return 0;
}

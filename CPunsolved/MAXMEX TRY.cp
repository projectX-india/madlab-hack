#include<bits/stdc++.h>
#define pi 3.14159265359

#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>



void solve()
{
    ll n,m;
    cin>>n>>m;
    
    set<ll> pie;
    ll answer=0;
    
    ll x;
    
    for(ll i=0;i<n;i++)
    {cin>>x;
        if(x!=m)
        {pie.insert(x);answer++;}
    }
    ll mex=1;
    
    while(pie.count(mex))++mex;
    
    if(mex!=m)
        cout<<-1<<endl;
    
    else
        cout<<answer<<endl;
    
    
    
    
}



int main()
{
    
   speed;
   wh(t)
    {solve();}
    
    return 0;
}

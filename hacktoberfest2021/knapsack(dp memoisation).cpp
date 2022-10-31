#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll k(ll p[],ll w[],ll n, ll c, ll **dp)
{
    if(n<0)
    return 0;
    if(dp[n][c]!=-1)
    return dp[n][c];
    else if(w[n]<=c)
    {
        dp[n][c]=max(p[n]+k(p,w,n-1,c-w[n],dp) , k(p,w,n-1,c,dp));
        return dp[n][c];
    }
    else
    {
        dp[n][c]= k(p,w,n-1,c,dp);
        return dp[n][c];
    }
}

ll knapsack(ll p[],ll w[], ll n,ll m)
{
    ll** dp;
    dp = new ll*[n];
 
    for (ll i = 0; i < n; i++)
        dp[i] = new ll[m + 1];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j< m+1;j++)
        {
            dp[i][j]=-1;
        }
    }
    return k(p,w,n-1,m,dp);
}

int main()
{
    ll i,j,n,m;
    cin>>n>>m;
    ll p[n],w[n];
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>w[i];
    }
    cout<<knapsack(p,w,n,m);
    return 0;
}

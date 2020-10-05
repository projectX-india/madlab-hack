#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

void solve()
{
    ll n,m;
    cin>>n>>m;
    
    ll arr[n][m];
    vector<ll> v;
    ll ans=0;
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            v.push_back(arr[i][j]);
        }
    
    ll middle= v[v.size()/2];
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            ans+=abs(middle-arr[i][j]);
    
    cout<<ans<<endl;
}



int main()
{
    speed;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    wh(t)
     {solve();}
    
    return 0;
}

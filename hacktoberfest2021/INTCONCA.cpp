#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
#define multi ll t;cin>>t;while(t--)
#define present(c,i) (c.find(i)!=c.end())
#define cpresent(c,i) (find(all(c),i)!=c.end())
#define mod 1000000007
ll len(ll n)
{
    ll k=0;
    while(n>0)
    {
        k++;
        n/=10;
    }
    return k;
}
void solve()
{
    ll n,i,j,k,ans=0,l,r,left,right;
    vector<ll> a;
    cin>>n>>l>>r;
    for(i=0;i<n;i++)
    { cin>>k; a.pb(k); }
    sort(all(a));
    for(i=0;i<n;i++)
    {
        right=(r-a[i])/pow(10,len(a[i]));
        left=(l-a[i]+pow(10,len(a[i]))-1)/pow(10,len(a[i]));
        if(left<=right)
        ans+=upper_bound(all(a),right)-lower_bound(all(a),left);
    }
    cout<<ans<<"\n";
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    multi 
    solve();
	return 0;
}

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
void solve()
{
    ll n,i,j,k,m,a,b,evencount=0,oddcount=0,ans;
    cin>>n>>a>>b;
    m=n;
    while(m%2==0)
    {
        evencount++;
        m/=2;
    }
    for(i=3;i*i<=m;i+=2)
    if(m%i==0)
    {
        while(m%i==0)
        {
            oddcount++;
            m/=i;
        }
    }
    if(m!=1)
    oddcount++;
    if(a>=0 && b>=0)
    {
        ans=a*evencount+b*oddcount;
    }
    else if(a<=0 && b<=0)
    {
        if(n%2==0)
        ans=a;
        else ans=b;
    }
    else if(a>=0 && b<=0)
    {
        if(evencount)
        ans=a*evencount;
        else ans=b;
    }
    else if(a<=0 && b>=0)
    {
        if(evencount)
        ans=b*oddcount+a;
        else ans=b*oddcount;
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

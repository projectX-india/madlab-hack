#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        //ll count=0;
        cin>>n;
        ll a[n];
        for (ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map<ll,ll> f;
        for(ll x:a)
        {
            f[x]++;
        }
        ll res = n*(n-1);
        for (auto y:f)
        {
            if (y.second > 1)
            {
                res-=(y.second*(y.second-1));
            }
        }
        cout<<res<<endl;
    }
}

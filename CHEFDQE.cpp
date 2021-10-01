#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define ld long double
#define P 1000000007
#define inf 1e18
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i, j, t1;
    cin >> t1;
    //ll t1 = t;
    map<ll, vector<ll>> m1;
    while (t1--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n + 2);
        for (i = 1; i <= n; i++)
        {
            cin >> v[i];
            v[i] = v[i] % k;
            v[i] = (v[i] + k) % k;
        }
        m1[0].push_back(0);
        ll sum = 0;
        ll ans = inf;
        for (i = 1; i <= n; i++)
        {
            sum = (sum + v[i]) % k;
            //cout << "sum : " << sum << "\n";
            for (auto u : m1[sum])
            {
                // cout << "sum : " << sum << " u : " << u << "\n";
                if ((u & (n - i)) == u)
                {
                    //cout << u << " \n";
                    ll temp = 0;
                    ll end = n - i;
                    for (j = 0; j < 32; j++)
                    {
                        if (end & (1LL << j))
                        {
                            temp++;
                        }
                    }

                    ans = min(ans, temp);
                    if (ans == 0)
                        break;
                }
                        }
            m1[sum].push_back(i);
        }
        if (ans == inf)
            ans = -1;
        cout << ans << "\n";

        m1.clear();
    }

    return (0);

#define w(t) ll t;cin>>t;while(t--)
int main() {
	w(t)
    {
      int n;
      ll k;
      cin>>n>>k;
      vector<ll>array(n);
      for(ll i=0;i<n;i++)
      cin>>array[i];
      map<ll,ll> frequency1;
      map<ll,ll> frequency2;
      for(ll i=0;i<n;i++)
      {
        frequency1[array[i]]++;
      }
      for(ll i=0;i<n;i++)
      {
        if((array[i]^k)!=array[i])
        frequency2[(array[i]^k)]++;
        
      }
      ll maximum=0;
      ll minimum=1e18;
      for(ll i=0;i<n;i++)
      {
        if(frequency1[array[i]]+frequency2[array[i]]>=maximum)
        {
          if(frequency1[array[i]]+frequency2[array[i]]==maximum&&frequency2[array[i]]>minimum)
          continue;
          maximum=frequency1[array[i]]+frequency2[array[i]];
          minimum=frequency2[array[i]];
        }

      }
     cout<<maximum<<" "<<minimum<<endl;
    }

}

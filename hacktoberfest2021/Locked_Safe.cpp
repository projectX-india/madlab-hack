#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define MOD 1000000007
#define speed                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll ans = (n * (n - 1)) / 2;
    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            ll count = 1;
            while (a[i + 1] == a[i])
            {
                count++;
                i++;
            }
            ans -= ((count * (count - 1)) / 2);
        }
    }
    cout << ans << endl;
}

int main()
{
    speed;
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
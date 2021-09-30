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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (k > (n - 1) / 2)
    {
        cout << "NO" << endl;
        return;
    }
    for (ll i = 0; i < k; i++)
    {
        if (s[i] != s[s.size() - i - 1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
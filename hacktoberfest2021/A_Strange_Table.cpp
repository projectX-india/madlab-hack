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
    ll n, m, x;
    cin >> n >> m >> x;
    cout << ((x - 1) % n) * m + ((x - 1) / n) + 1 << endl;
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
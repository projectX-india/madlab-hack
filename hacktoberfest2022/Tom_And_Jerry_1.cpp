#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define f(i, a, b) for (int i = a; i <= b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
//CODE FOR TOM AND JERRY ON CODING PLATFORM
void solve()
{
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;
    int steps = abs(d - b) + abs(c - a);
    cout << steps << " ";
    if ((k - steps) % 2 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

signed main()
{
    FastIO;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define f(i, a, b) for (int i = a; i <= b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a * a + b * b < c * c)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

signed main()
{
    FastIO;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // int t = 1;
    // cin >> t;
    // while (t--)
    solve();
    return 0;
}
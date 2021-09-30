#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define f(i, a, b) for (int i = a; i <= b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
// 2 3 3 6
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int m;
    cin >> m;
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    int x, y;
    while (m--)
    {
        cin >> x >> y;
        int index = lower_bound(a, a + n, x) - a;
        if (index == n)
            index--;
        int p1 = max(0ll, x - a[index]);
        int p2 = max(0ll, y - (sum - a[index]));
        if (index >= 1)
        {
            int p3 = max(0ll, x - a[index - 1]);
            int p4 = max(0ll, y - (sum - a[index - 1]));
            cout << min(p3 + p4, p1 + p2) << endl;
        }
        else
            cout << p1 + p2 << endl;
    }
}
signed main()
{
    FastIO;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
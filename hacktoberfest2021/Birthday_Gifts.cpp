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
    int n, k;
    cin >> n >> k;
    int a[n];
    f(i, 0, n - 1) cin >> a[i];
    sort(a, a + n, greater<int>());
    int first = 0, second = 0;
    for (int i = 0; i < 2 * k; i++)
    {
        if (i % 2 == 0)
            first += a[i];
        else
            second += a[i];
    }
    second += a[2 * k];
    cout << max(first, second) << endl;
}
//THE MAIN FILE
signed main()
{
    FastIO;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    bool aa=false;
    while (t--){
        aa=!aa;
        solve();
    }
        
    return 0;
}

#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define f(i, a, b) for (int i = a; i <= b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int a, b;

// bool isPresent(int n)
// {
//     if (n == 1)
//         return true;
//     bool x = false, y = false;
//     if (n % a == 0 and a > 1)
//         x = isPresent(n / a);
//     if (x == true)
//         return x;
//     if (n - b >= 1)
//         y = isPresent(n - b);
//     return y;
// }

// void solve()
// {
//     int n;
//     cin >> n >> a >> b;
//     // cout << log(n) / log(a);
//     // if ((n - 1) % b == 0 or (log(n) / log(a)) == 0)
//     if (isPresent(n))
//         cout << "Yes" << endl;
//     else
//         cout << "No" << endl;
// }

void solve()
{
    int n;
    cin >> n >> a >> b;
    queue<int> q;
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
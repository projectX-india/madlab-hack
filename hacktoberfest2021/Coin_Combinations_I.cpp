#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define f(i, a, b) for (int i = a; i <= b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int CoinWays(int coin[], int n, int x, int dp[])
{
    if (x == 0)
        return 1;
    if (dp[x] != -1)
        return dp[x];
    int ans = 0;
    f(i, 0, n - 1)
    {
        if (x - coin[i] >= 0)
            ans += CoinWays(coin, n, x - coin[i], dp) % MOD;
    }
    return dp[x] = ans % MOD;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    int coin[n], dp[x + 1];
    f(i, 0, x) dp[i] = -1;
    f(i, 0, n - 1) cin >> coin[i];
    cout << CoinWays(coin, n, x, dp) << endl;
}

signed main()
{
    FastIO;
    solve();
    return 0;
}
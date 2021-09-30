#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define f(i, a, b) for (int i = a; i <= b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int n, k;

int SolveKro(int i, int pichleVowel, vector<vector<int>> &dp)
{
    if (i == n)
        return 1;
    if (dp[i][pichleVowel] != -1)
        return dp[i][pichleVowel];
    if (pichleVowel < k)
        return dp[i][pichleVowel] = (5 * SolveKro(i + 1, pichleVowel + 1, dp) % MOD + 21 * SolveKro(i + 1, 0, dp)) % MOD;
    return dp[i][pichleVowel] = (21 * SolveKro(i + 1, 0, dp)) % MOD;
}

void solve()
{
    cin >> n >> k;
    vector<vector<int>> dp(n, vector<int>(k, -1));
    f(i, 0, n - 1) f(j, 0, k - 1) dp[i][j] = -1;
    cout << SolveKro(0, 0, dp) << endl;
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
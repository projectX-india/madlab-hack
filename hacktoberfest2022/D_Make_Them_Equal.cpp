#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define MOD 1000000007
#define fr(i, a, b) for (int i = a; i <= b; i++)
#define frr(i, a, b) for (int i = a; i >= b; i--)
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int coin[1001];


void fillCoin() {
    int visited[1001] = { 0 };
    queue<int> q;
    q.push(1);
    coin[1] = 0;
    visited[1] = 1;
    int curr = 0;
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (int i = 1;i <= x;i++) {
            int y = (x + (x / i));
            if (y > 1000)
                continue;
            if (visited[y] == 0) {
                q.push(y);
                visited[y] = 1;
                coin[y] = coin[x] + 1;
            }
        }
    }
}

int rec(int n, int k, vector<int>& weight, vector<int>& price, vector<vector<int>>& dp) {
    if (n == 0)
        return 0;
    if (dp[n][k] != -1)
        return dp[n][k];
    int ans = 0;
    if (weight[n - 1] <= k)
        ans = max(ans, price[n - 1] + rec(n - 1, k - weight[n - 1], weight, price, dp));
    ans = max(ans, rec(n - 1, k, weight, price, dp));
    return dp[n][k] = ans;
}

void solve() {
    int n, k, x;
    cin >> n >> k;
    k = min(k, 20000);
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, -1));
    vector<int> weight(n), price(n);
    fr(i, 0, n - 1) {
        cin >> x;
        weight[i] = coin[x];
    }
    fr(i, 0, n - 1)
        cin >> price[i];
    cout << rec(n, k, weight, price, dp) << endl;
}

signed main() {
    FastIO;
    fillCoin();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
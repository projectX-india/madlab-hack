#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define MOD 1000000007
#define fr(i, a, b) for (int i = a; i <= b; i++)
#define frr(i, a, b) for (int i = a; i >= b; i--)
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
//this is a code for Mango marget that is on the coding platforms
void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> oprice(n + 1, 0);
    fr(i, 1, n)
        cin >> oprice[i];
    vector<vector<int>> adj(n + 1);
    int u, v;
    fr(i, 1, m) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> odegree(n + 1);
    fr(i, 1, n)
        odegree[i] = adj[i].size();
    vector<int> degree = odegree;
    vector<int> price = oprice;
    vector<pair<int, int>> vp;
    fr(i, 1, n)
        vp.push_back({ degree[i],i });
    sort(vp.begin(), vp.end());
    while (q--) {
        char c;
        cin >> c;
        if (c == "+") {
            cin >> u >> v;
            degree[u]++;
            degree[v]++;
        }
        if (c == "-") {
            cin >> u >> v;
            degree[u]--;
            degree[v]--;
        }
        if (c == '?') {
            int ans = 0;
            vector<pair<int, int>> vp;
            fr(i, 1, n)
                vp.push_back({ degree[i],i });
            sort(vp.begin(), vp.end());
            fr(i, 0, n - 1) {
                ans += price[vp[i].second];
                ans += degree[vp[i].second];
                ans -= (n - (i + 1))
            }
            degree = odegree;
            price = oprice;
        }
    }
}

signed main() {
    FastIO;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

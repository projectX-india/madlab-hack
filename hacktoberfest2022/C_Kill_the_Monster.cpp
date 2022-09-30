#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define MOD 1000000007
#define fr(i, a, b) for (int i = a; i <= b; i++)
#define frr(i, a, b) for (int i = a; i >= b; i--)
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve() {
    int ch, ca, mh, ma;
    cin >> ch >> ca >> mh >> ma;
    int coin, attack, health;
    cin >> coin >> attack >> health;
    bool ans = false;
    for (int i = 0;i <= coin;i++) {
        int a_coin = i;
        int h_coin = coin - i;
        int nch = ch + (h_coin * health);
        int nca = ca + (a_coin * attack);
        int cghoosa = (mh + nca - 1) / nca;
        int mghoosa = (nch + ma - 1) / ma;
        if (cghoosa <= mghoosa)
            ans = true;
    }
    (ans) ? cout << "YES" << endl : cout << "NO" << endl;
}

signed main() {
    FastIO;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
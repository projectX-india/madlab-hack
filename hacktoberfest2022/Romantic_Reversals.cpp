#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define MOD 1000000007
#define fr(i, a, b) for (int i = a; i <= b; i++)
#define frr(i, a, b) for (int i = a; i >= b; i--)
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<char> ans(n + 1);
    int temp = k, i = 0;
    while (temp >= 1) {
        ans[temp] = s[i];
        i++;
        temp -= 2;
    }
    int start = (temp == 0) ? 1 : 2;
    while (start < k) {
        ans[start] = s[i];
        i++;
        start += 2;
    }
    while (i < n) {
        ans[i + 1] = s[i];
        i++;
    }
    fr(i, 1, n)cout << ans[i];
    cout << endl;
}

signed main() {
    FastIO;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long

void solve() {
    ll n, k, total = 0;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > 0) {
            total += a[i];
        }
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        if (a[i] >= 0 || k <= 0) {
            break;
        } else {
            total -= a[i];
            k--;
        }
    }
    cout << total << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt;
    cin >> tt;
    for (int i = 0; i < tt; i++) {
        solve();
    }
}

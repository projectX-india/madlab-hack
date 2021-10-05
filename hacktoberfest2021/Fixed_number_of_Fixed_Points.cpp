#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    if (k == n - 1) {
        cout << -1 << '\n';
        return;
    }
    for (int i = 1; i <= k; i++) 
    {
        cout << i << ' ';
    }
    for (int j = k + 2; j <= n; j++) 
    {
        cout << j << ' ';
    }
    if (k < n) cout << k + 1 << '\n';
    
    else cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--) 
    solve();
    return 0;
}

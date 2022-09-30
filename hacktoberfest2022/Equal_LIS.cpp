#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define MOD 1000000007
#define fr(i, a, b) for (int i = a; i <= b; i++)
#define frr(i, a, b) for (int i = a; i >= b; i--)
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n == 2) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    if (n % 2 == 0) {
        list<int> l{ 2,1,4,3 };
        fr(i, 4, n - 1)
        {
            if (i % 2 != 0)
                l.push_back(i + 1);
            else
                l.push_front(i + 1);
        }
        for (int i : l)
            cout << i << " ";
        cout << endl;
    }
    else {
        for (int i = 1;i <= (n / 2);i++)
            cout << i << " ";
        for (int i = n;i > (n / 2);i--)
            cout << i << " ";
        cout << endl;
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
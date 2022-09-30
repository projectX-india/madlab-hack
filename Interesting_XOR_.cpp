#include <bits/stdc++.h>
#define endl "\n"
#define MOD 1000000007
#define pi 3.14159265359
#define ll long long
#define speed                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
// Author - Naman Malik
// Codechef/Codeforces Id - namanmalikk
// Email - namanmalikk@gmail.com

void solve()
{
    ll c;
    cin >> c;
    ll count = log2(c);
    ll x = (~(-1ll << count) ^ c), y = ~(-1ll << count);
    cout << x * y << endl;
}

int main()
{
    speed;
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
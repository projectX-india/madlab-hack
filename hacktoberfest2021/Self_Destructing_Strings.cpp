#include <bits/stdc++.h>
#define endl "\n"
#define MOD 1000000007
#define pi 3.14159265359
#define ll long long
#define speed                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define f(i, a, b) for (int i = a; i < b; i++)
#define rf(i, a, b) for (int i = a; i > b; i--)
#define wh(t) \
    int t;    \
    cin >> t; \
    while (t--)
using namespace std;
// Author - Naman Malik
// Codechef/Codeforces Id - namanmalikk
// Email - namanmalikk@gmail.com

void solve()
{
    string s;
    cin >> s;
    int one = 0, zero = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            one++;
        else
            zero++;
    }
    if (one == 0 || zero == 0 || s.size() % 2 != 0)
        cout << -1 << endl;
    else
        cout << abs(one - zero) / 2 << endl;
}

int main()
{
    speed;
    wh(t)
        solve();
    return 0;
}
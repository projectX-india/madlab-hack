#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define MOD 1000000007
#define speed                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;

void solve()
{
    ll r, c, x;
    cin >> r >> c >> x;
    ll a[r][c], b[r][c];
    for (ll i = 0; i < r; i++)
        for (ll j = 0; j < c; j++)
            cin >> a[i][j];
    for (ll i = 0; i < r; i++)
    {
        for (ll j = 0; j < c; j++)
        {
            cin >> b[i][j];
            b[i][j] = a[i][j] - b[i][j];
        }
    }
    for (ll i = 0; i < r; i++)
    {
        for (ll j = 0; j <= c - x; j++)
        {
            if (b[i][j] != 0)
            {
                for (ll k = 1; k < x; k++)
                    b[i][j + k] = b[i][j + k] - b[i][j];
                b[i][j] = 0;
            }
        }
    }
    for (ll i = 0; i <= r - x; i++)
    {
        for (ll j = 0; j < c; j++)
        {
            if (b[i][j] != 0)
            {
                for (ll k = 1; k < x; k++)
                    b[i + k][j] = b[i + k][j] - b[i][j];
                b[i][j] = 0;
            }
        }
    }
    for (ll i = 0; i < r; i++)
    {
        for (ll j = 0; j < c; j++)
        {
            if (b[i][j] != 0)
            {
                cout << "No" << endl;
                return;
            }
        }
    }
    cout << "Yes" << endl;
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
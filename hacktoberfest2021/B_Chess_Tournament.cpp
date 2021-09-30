#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define f(i, a, b) for (int i = a; i <= b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char mat[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            mat[i][j] = '0';
    for (int i = 1; i <= n; i++)
        mat[i][i] = 'X';
    for (int i = 1; i <= n; i++)
    {
        if (s[i - 1] == '1')
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == j)
                    continue;
                mat[i][j] = '=';
                mat[j][i] = '=';
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (s[i - 1] == '2')
        {
            bool flag = 0;
            for (int j = 1; j <= n; j++)
            {
                if (i == j)
                    continue;
                if (mat[i][j] == '+')
                    flag = 1;
                if (mat[i][j] == '0' and flag == 0)
                {
                    flag = 1;
                    mat[i][j] = '+';
                    mat[j][i] = '-';
                }
                if (mat[i][j] == '0' and flag == 1)
                {
                    mat[i][j] = '-';
                    mat[j][i] = '+';
                }
            }
            if (flag == 0)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << mat[i][j];
        cout << endl;
    }
}

signed main()
{
    FastIO;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
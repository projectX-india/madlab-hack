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
    int n, x, y;
    cin >> n >> x >> y;
    int a[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];

        
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum >= x && sum <= y)
        {
            cout << 0 << endl;
            return;
        }
        if (sum > y)
            break;
    }


    sum = 0;
    for (int it = 0; it < n - 1; it++)
    {
        sum += a[it];
        for (int i = 0; i <= it; i++)
        {
            for (int j = it + 1; j < n; j++)
            {
                if (a[j] >= a[i] + (x - sum) && a[j] <= a[i] + (y - sum))
                {
                    cout << 1 << endl;
                    return;
                }
            }
        }
    }


    sum = 0;
    for (int it = 0; it < n - 2; it++)
    {
        sum += a[it];
        for (int i = 0; i <= it; i++)
        {
            for (int j = i + 1; j <= it; j++)
            {
                ll z = (a[i] + a[j]);
                for (int k = j + 1; k < n; k++)
                {
                    for (int l = k + 1; l < n; l++)
                    {
                        if (a[k] + a[l] >= z + (x - sum) && a[k] + a[l] <= z + (y - sum))
                        {
                            cout << 2 << endl;
                            return;
                        }
                    }
                }
            }
        }
    }


    cout << -1 << endl;
}

int main()
{
    speed;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
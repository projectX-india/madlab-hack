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
    ll n, e, h, a, b, c, omlete, milk, cake = 0, cost = LONG_LONG_MAX;
    cin >> n >> e >> h >> a >> b >> c;
    bool milgya = false;

    while (cake <= min(e, h) && cake <= n)
    {
        ll max_omlete = (e - cake) / 2, max_milk = (h - cake) / 3;
        if (max_omlete + max_milk + cake < n)
            cake++;
        else
        {
            milgya = true;
            if (a <= b)
            {
                omlete = min(max_omlete, n - cake);
                milk = n - cake - omlete;
            }
            else
            {
                milk = min(max_milk, n - cake);
                omlete = n - cake - milk;
            }
            cost = min(cost, (omlete * a) + (milk * b) + (cake * c));
            cake++;
        }
    }

    cout << ((milgya) ? cost : -1) << endl;
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
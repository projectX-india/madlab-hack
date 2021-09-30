#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define MOD 1000000007
#define speed                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;

string solve()
{
    ll n;
    cin >> n;
    ll a[n], chances = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    bool player = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > i + 1)
            return (!player == 0) ? "First" : "Second";
        chances += (i + 1 - a[i]);
    }
    if (chances & 1)
        player = !player;
    return (!player == 0) ? "First" : "Second";
}

int main()
{
    speed;
    ll t;
    cin >> t;
    while (t--)
        cout << solve() << endl;
    return 0;
}
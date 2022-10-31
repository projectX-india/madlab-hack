#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll int t;
    cin >> t;
    while (t--)
    {
        unsigned ll int a, i, j, a[100002], count = 0, flag = 0, b, x, h, ans;
        string s;
        vector<ll int> vect;
        cin >> a >> b >> x;
        h = x % a;
        if (h == 0)
            h = a;
        ans = (h - 1) * b;
        count = h;
        for (i = h;; i += a)
        {
            ans++;
            if (count == x)
                break;
            count += a;
        }
        cout << ans << endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    for (int full = 1; full <= n; full++)
    {
        char ans[2 * n];
        int op = n - full;
        int cl = n - full;
        int tfl = full;
        for (int i = 0; i < 2 * n; i++)
        {
            if (op > 0)
            {
                ans[i] = '(';
                op--;
            }
            else if (tfl > 0)
            {
                ans[i] = '(';
                ans[i + 1] = ')';
                i++;
                tfl--;
            }
            else if (cl > 0)
            {
                ans[i] = ')';
                cl--;
            }
        }
        for (int i = 0; i < 2 * n; i++)
            cout << ans[i];
        cout << endl;
    }
    }
}
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll arr[n];
        ll odd = 0, even = 0;
        for(ll i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]%2==0)
                even++;
            else    
                odd++;
        }
        if(even == n){
            ll MOD = 1e9 + 7;
            for(ll i = 0; i<n; i++){
                ll ans = 0;
                while(arr[i]%2 != 1){
                    arr[i] /= 2;
                    ans++;
                }
                MOD = min(ans, MOD);
            }
            cout << MOD << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;
}

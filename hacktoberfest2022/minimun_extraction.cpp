#include <bits/stdc++.h>
using namespace std;
#define MAX 10000
#define ll long long 
//This is a code for minimum_extraction 
int main() {
    int tt;
    cin>>tt;
    while(tt--) {
        ll n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll curr = 0;
        ll ans = arr[0];
        for(int i=0;i<n-1;i++) {
            if(arr[i]>=0)
                curr+=arr[i];
            else
                curr += arr[i];
            ans = max(ans , arr[i+1] - curr);
            arr[i+1] -= curr;
        }
        cout<<ans<<endl;
        
    }
}

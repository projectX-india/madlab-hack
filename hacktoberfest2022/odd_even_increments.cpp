#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve() {
   ll n;
    cin>>n; 
    vector<ll> even,odd;
    for(ll i=0;i<n;i++){
        int x;
        cin>>x;
        if(i%2) odd.push_back(x);
        else even.push_back(x);
    }
    bool f1=true;
    bool f2 = true;
    for(ll i=1;i<odd.size();i++) {
        if(odd[i]%2!=odd[i-1]%2) {
            f1=false;
            break;
        }
        
    }
    for(ll i=1;i<even.size();i++) {
        if(even[i]%2!=even[i-1]%2) {
            f2=false;
            break;
        }
        
    }
    if(f1 && f2) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    
    
  
}
 
int main() {
    ll tt;
    cin>>tt;
    while(tt--) {
        solve();
    }
    return 0;
}

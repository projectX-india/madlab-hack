#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<ll> v;
        ll n,ele,mx=0;
        cin>>n;
        for(int i=0;i<(n);i++){
            cin>>ele;
            v.push_back(ele);
        }
        for(int i=0;i<n-1;i++){
            mx=max(mx,v[i]*v[i+1]);
         }
         cout<<mx<<'\n';
    }
}
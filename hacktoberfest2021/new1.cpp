#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char,int>mappy;
        for(auto x:s){
            mappy[x]++;
        }
        if(mappy['B']==mappy['A']+mappy['C']){
        cout<<"YES"<<endl;
        continue;}
        else
        cout<<"NO"<<endl;
    }
    return 0;
}

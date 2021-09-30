#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        long long n, f;
        cin>>n;
        f = n;
        long long rem;
        long long rev = 0;

        while(n>0){
            rem = n%10;
            rev = rev*10 + rem;
            n = n/10;
        }

        if(rev==f){
            cout<<"wins"<<endl;
        }

        else{
            cout<<"loses"<<endl;
        }
    }

    return 0;
}
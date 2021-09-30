#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i;i<n;i++){
        int k;
        cin>>k;
        if(k>=2000){
            cout<<"1\n";
        }
        else if(k>=1600 && k<2000){
            cout<<"2\n";
        }
        else if(k<1600){
            cout<<"3\n";
        }
    }
    return 0;
}
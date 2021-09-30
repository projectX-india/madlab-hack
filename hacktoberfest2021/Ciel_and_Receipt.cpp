#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){

        int p;
        cin>>p;

        int items = 0;
        for(int i = 11; i >=0; i--){
            int power = pow(2, i);
            while(p >= power){
                p = p - power;
                items++;
            }
        }

        cout<<items<<endl;
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

string solution(int n){
    int i = 0;
    int j = 0;
    for(i=0;i<n;i++){
        for (j = 0; j < i; j++)
        {
            cout<<"()";
        }
    }
    cout<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<"(";
    }
    for (i = 0; i < n; i++)
    {
        cout<<")";
    }
    cout<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<"(";
        for (j = 0; j < i; j++)
        {
            cout<<")";
        }
        
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solution(n);
    }
}
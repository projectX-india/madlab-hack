#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

int main()
{ //write code here
    int n;
    cout<<"Enter number whose table you want to print";
    cin>>n;
    for(int i=1;i<11;i++)
    {
        cout<<i<<"*"<<n<<"="<<i*n;
    }
    return 0;
}

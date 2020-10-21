#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
// Program to display a number if it is negative

int main()
{
    int a;
    cout<<"Enter any number(positive or negative):";
    cin>>a;
    if(a<0)
    {
        cout<<"The given number is a negative number.";
    }
    else
    {
        cout<<"The given number is a positive number.";
    }
    return 0;
}

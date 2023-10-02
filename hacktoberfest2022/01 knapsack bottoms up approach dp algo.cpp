#include<bits/stdc++.h>
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;
#include<string.h>

int main()
{
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int w = 50;
    int n = sizeof(val) / sizeof(val[0]);
    
    for(int i=0;i<n+1;i++)
        for(int j=0;j<w+1;j++)
        {
            if(i==0||j==0)
                t[i][j]=0;
        }
    
    for(int i=1;i<n+1;i++)
        for(int j=1;j<w+1;j++)
        {
            if(wt[i-1]<=j)
            {
                t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
            }
            else
                t[i][j]=t[i-1][j];
        }
    cout<<t[n][w]<<endl;
    return 0;
}


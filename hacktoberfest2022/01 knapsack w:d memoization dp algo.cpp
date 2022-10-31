#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//01 knapsack problem
// time complexity o(2^n)
//space complexity O(n)

//memo matrix
const int mxn=1e3+3;
int t[mxn][mxn];

int knapsack(int wt[], int val[], int w, int n)
{
    if(n==0 || w==0)
        return 0;
    
    if(t[n][w]!=-1)
        return t[n][w];
    
    if(wt[n]<=w)
    {
        return t[n][w]=max(val[n]+knapsack(wt, val, w-wt[n], n-1),knapsack(wt, val, w, n-1));
    }
    else
    {
        return t[n][w]=knapsack(wt, val, w, n-1);
    }
}

int main()
{
    memset(t, -1, sizeof(t));
    
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapsack(wt, val, W, n);
    return 0;
}

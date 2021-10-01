#include<iostream>
#include<cstring>
#include<vector>
#include<math.h>
#include<stack>
#include<queue>
#include<bits/stdc++.h> 
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<string>
#include <utility> 
using namespace std;

typedef long long ll;

#define pb as push_back
#define mp as make_pair

ll dp[2005][2005];
vector<int> a;
ll rec(ll health,int i,int count)
{
    if(health<0)
    return INT_MIN;

    if(i==a.size())
    return count; 

    if(dp[i][count]!=-1)
    return dp[i][count];

    if(a[i]>=0)
    return dp[i][count]=rec(health+a[i],i+1,count+1);
    else
    return dp[i][count]=max(rec(health+a[i],i+1,count+1),rec(health,i+1,count));
    
}
//scanf("",&);
void chalia_shuru_karte_ha()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    a.clear();
    a.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<rec(0,0,0)<<"\n";
    
}
int main()
{
    ll t=1;
    int i=1;
    //scanf("%lld",&t);
    while(t--)
    {
        //cout<<"Case #"<<i<<": ";
        chalia_shuru_karte_ha();
        //i++;
    }
    return 0;
}
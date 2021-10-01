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


//vector<vector<pair<int,int>>> g;
//scanf("",&);
void chalia_shuru_karte_ha()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int x=n+m-1;
    if(a<x||b<x)
    {
        cout<<"Impossible\n";
        return;
    }
    int arr[n][m];

    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    arr[i][j]=1;

    arr[n-1][m-1]+=a-x;
    arr[n-1][0]+=b-x;
    cout<<"Possible\n";
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        cout<<arr[i][j]<<" ";
      }
      cout<<"\n";
    }
}
int main()
{
    ll t=1;
    int i=1;
    scanf("%lld",&t);
    while(t--)
    {
        cout<<"Case #"<<i<<": ";
        chalia_shuru_karte_ha();
        i++;
    }
    return 0;
}
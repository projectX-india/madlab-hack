#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m,l,x,y,q=0,c=0,a,b;
    unordered_map<int,int> p;
    cin>>n>>m>>l;
    int s[l];
    for(int i=0;i<m;i++)
    {
      cin>>x;
      for(int j=0;j<x;j++)
      {
        cin>>y;
        p[y]=q;
      }
      q++;
    }
    cin>>s[0];
    for(int i=1;i<l;i++)
    {
       cin>>s[i];
       if(p[s[i]]!=p[s[i-1]])
        c++;
    }
   
    cout<<c+1<<endl;
  }
}

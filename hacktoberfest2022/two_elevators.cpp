// Problem link: https://codeforces.com/contest/1729/problem/A

#include<bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define ivec(x) for(auto &i:x) cin>>i;
#define ovec(x) for(auto &i:x) cout<<i<<" "; cout<<endl;

void solve(){
  int a,b,c;
  cin>>a>>b>>c;

  if(a==1){
    cout<<1<<nline;
    return;
  }
  
  int x=abs(a-1);
  int y= abs(b-c) + abs(c-1);

  if(x==y)
    cout<<3<<nline;
else if(x>y)
    cout<<2<<nline;
  else
    cout<<1<<nline;


}


int32_t main(){
      
    fastio();

    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
    #endif

     int T=1;
     cin>>T;
     while(T--){
       solve();
   }

return 0;
}

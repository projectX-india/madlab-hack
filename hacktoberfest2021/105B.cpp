#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define fi first
#define sec second
typedef long long ll;
typedef long double  ld;
#define pii pair<ll,ll>
#define vi vector< ll >
#define vvi vector< vi >
#define vpi vector< pii >
#define vvpi vector< vpi >
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define test(t) ll t;cin>>t;while(t--)
#define mem(a,b) memset(a,b,sizeof(a))
#define inn freopen("input.txt", "r", stdin)
#define outt freopen("output.txt", "w", stdout)
#define all(arr) arr.begin(),arr.end()
#define fr(i,n) for(ll i=0;i<(n);++i)
#define rep(i,a,b) for(ll i=a;i<=b;++i)
#define per(i,a,b) for(ll i=a;i>=b;i--)
#define remin(a,b) (a=min((a),(b)))
#define remax(a,b) (a=max((a),(b)))

void sol(){
    ll n,u,r,d,l;
    bool  allcomb[16][4]={
        {0,0,0,0},
        {0,0,0,1},
        {0,0,1,0},
        {0,0,1,1},
        {0,1,0,0},
        {0,1,0,1},
        {0,1,1,0},
        {0,1,1,1},
        {1,0,0,0},
        {1,0,0,1},
        {1,0,1,0},
        {1,0,1,1},
        {1,1,0,0},
        {1,1,0,1},
        {1,1,1,0},
        {1,1,1,1},
    };
    cin>>n>>u>>r>>d>>l;
    ll tempu, tempr,  tempd, templ;
    for(int i=0;i<16;i++){
        tempu = u;
        tempr = r;
        tempd = d;
        templ = l;
        if(allcomb[i][0] ==true ){
            tempu--;
            tempr--;
        }
        if(allcomb[i][1] ==true ){
            tempr--;
            tempd--;
        }
        if(allcomb[i][2] ==true ){
            tempd--;
            templ--;
        }
        if(allcomb[i][3]==true){
            templ--;
            tempu--;
        }
        
        if(tempu<=n-2 && tempu>=0 && tempr<=n-2 && tempr>=0 && templ<=n-2 && templ>=0 && tempd<=n-2 && tempd>=0){
        cout<<"YES\n";
        return;
        }
        
    } 
    cout<<"NO\n";
}

int main(void){
    fast;
    test(t){
        sol();
    }
}
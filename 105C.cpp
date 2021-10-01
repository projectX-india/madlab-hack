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

ll calc(vi a, vi b){
    ll n = a.size();
    ll m = b.size();
    vi su(n+1);
    ll r = 0;
    bool aa=true;
    for(ll i=0;i<n+1;++i){
        aa=!aa;
    }
    for(int i=0;i<n+1;i++){
        cout<<su[i]<<" ";
    }
    cout<<"\n";
}

void sol(){
    ll n,m;
    cin>>n>>m;
    vi al,ar,bl,br;
    fr(i,n){
        ll temp;
        cin>>temp;
        if(temp<0){
            al.pb(-1*temp);
        }else{
            ar.pb(temp);
        }
    }
    fr(i,m){
        ll temp;
        cin>>temp;
        if(temp<0){
            bl.pb(-1*temp);
        }else{
            br.pb(temp);
        }
    }

}

int main(void){
    fast;
    test(t){
        sol();
    }
}

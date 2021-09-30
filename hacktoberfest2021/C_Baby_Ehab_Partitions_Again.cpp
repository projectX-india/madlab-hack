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
long long powerof2[] = {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824,2147483648,4294967296};

void sol(){
    ll n;
    cin>>n;
    vi arr;
    ll sum = 0;
    fr(i,n){
        ll temp;
        cin>>temp;
        sum+=temp;
        arr.pb(temp);
    }
    if(sum%2!=0){
        cout<<0<<"\n";
    }else{
        bool dp[n+1][(sum/2)+1];
        fr(i,n+1){
            fr(j,(sum/2)+1){
                if(i==0 && j==0){
                    dp[i][j] = 1;
                }else if(i==0){
                    dp[i][j] = 0;
                }else if(j==0){
                    dp[i][j] = 1;
                }else{
                    if(arr[i-1]<=j){
                        dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
                    }else{
                        dp[i][j] = dp[i-1][j];
                    }
                }
                //cout<<dp[i][j]<<" ";
            }
            //cout<<"\n";
        }
        if(dp[n][sum/2]==1){
            cout<<1<<"\n";
            bool flag = false;
            while(flag==false){
                fr(i,n){
                    if(arr[i]%2!=0){
                        cout<<i+1<<"\n";
                        flag = true;
                        break;
                    }else{
                        arr[i] = arr[i]/2;
                    }
                }
            }
        }else{
            cout<<0<<"\n";
        }
    }
}

int main(void){
    fast;
    sol();
}
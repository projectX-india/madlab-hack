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

/*=============================================================================
#  Author:          Parv Gupta - https://github.com/parvg555/
#  Email:           parvg555@gmail.com
#  FileName:        105A.cpp
#  Created On:      02/03/2021
#  Problem Code:    abc string 
=============================================================================*/


bool checkcker(char s[], ll len){
    // checker functon
    if(s[0]==s[len-1]){
        return false;
    }
    stack <char> checker;
    for(int i=0;i<len;i++){
        if(s[i]=='('){
            checker.push('(');
        }else{
            if(checker.size()!=0){
                checker.pop();
            }else{
                return false;
            }
        }
    }
    if(checker.size()!=0){
        return false;
    }
    return true;
}

void sol(){
    string s;
    cin>>s;
    ll len = s.length();
    char ans1[len];
    char ans2[len];
    char first = s[0];
    char end = s[len-1];
    for(int i=0;i<len;i++){
        if(s[i]==first){
            ans1[i]='(';
            ans2[i]='(';
        }else if(s[i]==end){
            ans1[i]=')';
            ans2[i]=')';
        }else{
            ans1[i]=')';
            ans2[i]='(';
        }
    }
    //checking with (
    if(checkcker(ans1,len)==true || checkcker(ans2,len)==true){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
}

int main(void){
    fast;
    test(t){
        sol();
    }
}

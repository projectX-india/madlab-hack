#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);

using namespace std;
#include<string.h>
void solve()
{
    ll p,q,r,a,b,c;
    cin>>p>>q>>r;
    cin>>a>>b>>c;
    
    set<ll> diff;
    set<ll> multi;
    
    int counter=0;
//    case 1
    if((p==a) && (q==b) && (r==c))
    {cout<<0<<endl;return;}
//    calculating multiplication
    int multicounter=0;
    if(a%p==0)
    {multi.insert(a/p);multicounter++;}
    if(b%q==0)
    {multi.insert(b/q);multicounter++;}
    if(c%r==0)
    {multi.insert(c/r);multicounter++;}
    
    
    diff.insert(abs(p-a));
    diff.insert(abs(q-b));
    diff.insert(abs(r-c));
    
    if(diff.size()==1 || (multi.size()==1 && multicounter==3))
    {cout<<1<<endl;return;}
    
    if(multicounter==2)
    {
        
        
        
    }
    
}
    

    




int main()
{
    speed;
   wh(t)
    {solve();}
    
    return 0;
}

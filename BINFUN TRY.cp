#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya
const int mxn=1e5+5;
ll arr[mxn];
unsigned countbits(ll n)
{
    return (int)log2(n)+1;
}
void solve()
{
    ll n,x,y,a,b;
    ll ans=0;
    ll nzt, kzt;
    cin>>n;
    ll max2=0;
    ll counter2=0;
    ll kkk;
    f(i,0,n)
    {
        cin>>kkk;
        if(__builtin_popcount(kkk)==1)
        {
            max2=max(max2,kkk);
            counter2++;

        }
        arr[i]=kkk;
    }
    
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(x<y)
        {
            x=max2;
            y=arr[i];
        }
        else
        {
            y=max2;
            x=arr[i];
        }
        
             a=(x<<(countbits(y)))+y;
             b=(y<<(countbits(x)))+x;
            
//            cout<<x<<" "<<y<<" "<<a-b<<endl;
            
            if(ans<a-b)
            {
            ans=max(ans,a-b);
                kzt=x;
                nzt=y;
            }
    }
            
//    cout<<kzt<<" "<<nzt<<endl;
    cout<<ans<<endl;
    
    
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}

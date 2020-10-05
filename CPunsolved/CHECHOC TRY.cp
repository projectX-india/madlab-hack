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

void solve()
{
    ll n,m,x,y;
    
    cin>>n>>m>>x>>y;
    
    ll total=m*n;
    
    if(total==1)
    {
        if(x>y)
        cout<<y<<endl;
        else
            cout<<x<<endl;
        return;
    }
    
    if(total%2==0)
    {
        if(x>(y/2))
        {
            if(y%2==0)
            {
                ll zeta;
//                cout<<total<<" "<<y/2<<endl;
                ll kapta=(total*(y/2));
                if(x>=y)
                    zeta=(total/2)*y;
                else
                    zeta=0;
                
                cout<<max(kapta,zeta)<<endl;
                return;
            }
            else
            {
                ll zeta;
                ll kapta=((total/2)*(y/2+1))+((total/2)*(y/2));
                if(x>=y)
                    zeta=(total/2)*y;
                else
                    zeta=0;
//                cout<<total/2<<"*"<<(y/2+1)<<"+"<<total/2<<"*"<<y/2<<endl;
                cout<<max(kapta,zeta)<<endl;
                return;
            }
            
        }
        else
        {
            
            cout<<total*x<<endl;
            return;
        }
    }
    else
    {
        if(x>(y/2))
        {
            if(y%2==0)
            {
                ll zeta;
                ll kapta=(total*(y/2));
                if(x>=y)
                    zeta=(total/2+1)*y;
                else
                    zeta=0;
                cout<<max(kapta,zeta)<<endl;
                return;
            }
            else
            {
                ll zeta;
                ll kapta=(((total/2)+1)*(y/2+1))+((total/2)*(y/2));
                if(x>=y)
                    zeta=(total/2+1)*y;
                else
                    zeta=0;
//                cout<<((total/2)+1)<<"*"<<(y/2+1)<<"+"<<total/2<<"*"<<y/2<<endl;
                cout<<max(kapta,zeta)<<endl;
                return;
            }
            
        }
        else
        {
            cout<<total*x<<endl;
            return;
            
        }
    }
    
    
    
}



int main()
{
    speed;
    wh(t)
     {solve();}
    
    return 0;
}

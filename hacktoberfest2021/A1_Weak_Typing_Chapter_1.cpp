#include<iostream>
#include<cstring>
//hello again again
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

ll l[8000005],r[1000005];
ll mod=1000000007;
recl(ll n,string s,ll x,ll flag)
{
    ll count=0;
    for(ll i=x;i<n;i++)
    {
       // cout<<count<<" ";

            if(s[i]=='X')
            {
                if(flag==1)
                {
                    count++;
                    flag=0;
                }
            }

            if(s[i]=='O')
            {
                if(flag==0)
                {
                    count++;
                    flag=1;
                }
            }
        l[i]=count%mod;
        count=count%mod;
    }
    
}
recr(ll n,string s,ll x,ll flag)
{
    ll count=0;
    for(ll i=x;i<n;i++)
    {

            if(s[i]=='X')
            {
                if(flag==1)
                {
                    count++;
                    flag=0;
                }
            }

            if(s[i]=='O')
            {
                if(flag==0)
                {
                    count++;
                    flag=1;
                }
            }
        r[i]=count%mod;
        count=count%mod;
    }
}
void chalia_shuru_karte_ha()
{
    ll n;
    string s;
    cin>>n;
    cin>>s;
    ll ans=0;
    string x=s;
    char c='F';
    for(ll i=n-1;i>=0;i--)
    {
        if(s[i]=='O'||s[i]=='X')
        c=s[i];
        else
        s[i]=c;
    }
    //cout<<s<<"\n";
    if(s[0]=='X')
        {
            recl(n,x,0,0);
            for(ll j=0;j<n;j++)
            {
                ans+=l[j];
                ans=ans%mod;
            }
        }
        if(s[0]=='O'||s[0]=='F')
        {
            recr(n,x,0,1);
            for(ll j=0;j<n;j++)
            {
                ans+=r[j];
                ans=ans%mod;
            }
        }
        //cout<<ans;
        ll ans1=ans;
        s=x;
        for(ll i=0;i<n;i++)
        {
            c=s[i];
            if(s[i]!='F')
            break;
        }
        //cout<<ans<<" ";
        //cout<<c;
    for(ll i=1;i<n-2;i++)
    {
        //cout<<ans<<" ";
        if(s[i]=='F')
        {
            ll x1=0,x2=0;
            ll j=i;
            while(s[j]=='F'&&j<n)
            {
                j++;
                x1=(x1+ans)%mod;
                x2=(x2+(ans-(n-i-1)))%mod;
            }
            if(j==n)
            break;
            //cout<<s[j];
            
            if(s[j]!=c)
            {
                //cout<<" "<<n<<" "<<i<<" ";
                ans=ans-(n-i-1);
                //ans1+=(((j-i)*ans)%mod);
                ans1+=x2;
            }
            else{
                //ans1+=(((j-i)*ans)%mod);
                ans1+=x1;
            }
            c=s[j];
            i=j-1;
            ans1=ans1%mod;
            continue;
        }

        if(s[i]!=c)
        {
            ans=ans-(n-i);
        }
        c=s[i];
        ans1+=ans;
        ans1=ans1%mod;
        //cout<<ans1<<" "<<ans<<"\n";
        if(ans<=0)
        break;
    }
    printf("%lld\n",ans1);
}
int main()
{
    ll t=1;
    ll i=1;
    scanf("%lld",&t);
    while(t--)
    {
        cout<<"Case #"<<i<<": ";
        chalia_shuru_karte_ha();
        i++;
    }
    return 0;
}

#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

void solve()
{
    int n;
    cin>>n;
    
    int v[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }

    set<int> arr[n+1];
    for(int i=1;i<=n;i++)
    {
        arr[i].insert(i);
        for(int j=1;j<=n; j++)
        {
            if((v[j]-v[i])!=0 && float(1.0*(i-j)/(v[j]-v[i]))>=0)
            {
                arr[i].insert(j);
            }
        }
    }
   
//    here
//    for(int i=1;i<=n;i++)
//    {
//        cout<<i<<": \n";
//        for(auto x: arr[i])
//            cout<<x<<" ";
//        cout<<endl;
//    }
//    here
    ll maxinfect[n+1];
   memset(maxinfect, 0, sizeof(maxinfect));

    set<int> tempans;
    for(int i=1;i<=n;i++)
    {
        tempans.clear();
        for(auto x: arr[i])
        {
            for(auto y:arr[x])
            {
                tempans.insert(y);
            }
        }
        maxinfect[i]=tempans.size();
    }
//    here
//    for(int i=1;i<=n;i++)
//        cout<<maxinfect[i]<<" ";
//    cout<<endl;
//    here
    ll min=INT_MAX;
    ll max=0;
    for(int i=1;i<=n;i++)
    {
        if(maxinfect[i]>max)
            max=maxinfect[i];
        if(maxinfect[i]<min)
            min=maxinfect[i];
    }
    cout<<min<<" "<<max<<endl;
}



int main()
{
    speed;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    wh(t)
     {solve();}
    
    return 0;
}

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
const int mxn=102;
bool arr[mxn][mxn];

void functt(int m, int n, int x, int y)
{
    int i, k = 1, l = 1;
  

  
    while (k <= m && l <= n) {
     
        for (i = l; i <= n; ++i) {
            if(!arr[k][i])
                cout<<k<<" "<<i<<endl;
        }
        k++;

        for (i = k; i <= m; ++i) {
            if(!arr[i][n])
            cout<<i<<" "<<n<<endl;
        }
        n--;
  

        if (k < m) {
            for (i = n; i >= l; --i) {
                if(!arr[m][i])
                cout<<m<<" "<<i<<endl;
            }
            m--;
        }
 
        if (l < n) {
            for (i = m; i >= k; --i) {
                if(!arr[i][l])
                cout<<i<<" "<<l<<endl;
            }
            l++;
        }
    }
}
  


void solve()
{
    int n, m, x, y;
    cin>>n>>m>>x>>y;
    
    for(int i=x;i>0;i--)
    {
        arr[i][y]=true;
        x=i;
        cout<<i<<" "<<y<<endl;
    }
    y--;
    for(int i=y;i>0;i--)
    {
        arr[x][i]=true;
        y=i;
        cout<<x<<" "<<i<<endl;
    }
    functt(n, m, 1, 1);
}



int main()
{
    speed;
     solve();
    
    return 0;
}

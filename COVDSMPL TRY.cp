#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);

using namespace std;
#include<string.h>
void solve()
{
    int n,p;
    cin>>n>>p;
    
    float nn=n;
        float pp=1.0*p/100;
    //    cout<<pp<<endl;
        float val=ceil(pp*pow(nn,4));
    int valhigh=val;
//    cout<<valhigh<<endl;
    int arr[n][n];
    memset(arr,0,sizeof(arr));
    int response;
    for(int i=0;i<n;i++)
    {
        if(valhigh<=0)
            break;
        
        cout<<1<<" "<<i+1<<" "<<1<<" "<<i+1<<" "<<n<<endl;
        cin>>response;
        if(response==0)
            continue;
        int rowcounter=response;
        
        for(int j=0;j<=n;j++)
        {
            cout<<1<<" "<<i+1<<" "<<j+2<<" "<<i+1<<" "<<n<<endl;
            cin>>response;
            if(response==(rowcounter-1))
            {arr[i][j]=1;--valhigh; rowcounter--;}
            if(rowcounter==1 && j+1==n)
            {
                arr[i][j+1]=1;rowcounter--;
            }
//            cout<<valhigh<<endl;
            if(valhigh<=0)
                break;
            if(rowcounter<=0)
                break;
        }
        
        
        
    }
    
    cout<<2<<endl;
    for(int i=0;i<n;i++)
    {  for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cin>>response;
    
    
}
    

    




int main()
{
    speed;
   wh(t)
    {solve();}
    
    return 0;
}

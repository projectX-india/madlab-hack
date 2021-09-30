#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],neg[k],naya[n];
        memset(naya,0,sizeof(naya));
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }    
        int sub = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=0)
            {
                sub = sub+a[i];
            }
            else
            {
                naya[i]=a[i];
            }
        }      
       int sum=0;
       sort(naya,naya+n);
       for(int i=0;i<k;i++)
       {
         neg[i]=naya[i];
       }
       for(int i=0;i<k;i++)
       {
           neg[i]=neg[i]*(-1);
           sum+=neg[i];
       }
       int ans = sub+sum;
       cout<<ans<<endl;
        // int n,s,k;
        // cin>>n>>s>>k;
        // int sum=0;
        // for(int i=1;i<n*2;i=i+2)
        // {
        //   sum+=i;
        // }
        // int ans = (k-sum)/(s-1);
        // cout<<ans<<endl;
    //     int a,b,c;
    //     cin>>a>>b>>c;

    //     if (a <= b && a <= c)
    //     cout<<"Draw"<<endl;
 
    // else if (b <= a && b <= c)
    //     cout<<"Bob"<<endl;
 
    // else
    //     cout<<"Alice"<<endl;
    }
    return 0;
}
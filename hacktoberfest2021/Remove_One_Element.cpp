#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n-1];
               for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
            for(int i=0;i<(n-1);i++)
            {
                cin>>b[i];
            }
            sort(a,a+n, greater<int>());
            sort(b,b+(n-1), greater<int>());
            int x,y,z,w;
        if(n>2)
        {
            x=(b[0]-a[0]);
            y=(b[1]-a[1]);
            z=(b[1]-a[2]);
            w=(b[0]-a[1]);
            if(x==y&&x>0)
            {
                cout<<x;
                cout<<"\n";
            }
            else if((x==z)&&x>0)
            {
                cout<<z;
                cout<<"\n";
            }
            else if((w==z)&&z>0)
            {
                cout<<z;
                cout<<"\n";
            }
        }
        else
        {
            x=(b[0]-a[0]);
            y=(b[0]-a[1]);
            if((x>0))
            {
                cout<<x;
                cout<<"\n";
            }
            else
            {
                cout<<y;
                cout<<"\n";
            }
            }
    }
return 0;
}
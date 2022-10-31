// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int a,b,a1,b1,a2,b2;
//         cin>>a>>b>>a1>>b1>>a2>>b2;
//         if(((a1==a) || (b1==a)) && ((b1==b) || (a1==b)))
//         {
//             cout<<"1"<<endl;
//         }
//         else if(((a2==b) || (b2==b)) && ((a2==a) || (b2==a)))
//         {
//             cout<<"2"<<endl;
//         }
//         else
//         cout<<"0"<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int a[n];
//         for(int i=1;i<=n;i++)
//         {
//             a[i]=i;
//         }
//         int sum = 0;
//         for(int i=1;i<=n;i++)
//         {
//           sum = sum+a[i];
//         }
//         if((sum%2)!=0)
//         {
//             cout<<(n-1)<<endl;
//             // for(int i=n;i>=1;i--)
//             // {
//             //     sum=sum-a[i];
//             // }
//         }
//         else
//         cout<<n<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int w[n-1];
//         int a[n-1];
//         for(int i=0;i<n;i++)
//         {
//             cin>>w[i];
//             a[i]=i+1;
//         }
//         int node = n;
//         for(int i=n-1;i>=1;i--)
//         {
//             if((a[i]-a[0])==(w[i]-w[0]))
//             {
//                 continue;
//             }
//             else
//             {
//              node--;
//             }
//         }
//         cout<<node<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,k;
//         cin>>n>>k;
//         int a[n];
//         for(int i=0;i<n;i++)
//         {
//             cin>>a[i];
//         }
//         int m = *max_element(a,a+n);
//         // cout<<m;
//         int count =0;
//         for(int i=0;i<n;i++)
//         {
//             if(a[i]==m && (i+1)>=k)
//             {
//                 count+=(n-i);
//             }
//         }
//         cout<<count<<endl;
//     }
//     return 0;
// }


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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int m = *max_element(a,a+n);
        for(int i=0;i<n;/*-i++)
        {
            if(a[0]!=m)
            {
                cout<<"-1"<<endl;
                continue;
            }

        }
        int count =0;
        for(int i = (n-1);i>0;i++)
        {
            if(a[i]>m)
            {
                m=a[i];
                count++;
            }
        }
        cout<<(count+1)<<endl;
    }
    return 0;
}
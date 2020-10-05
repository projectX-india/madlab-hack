#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

int main()
{
    int n=0,m=1,sum;
    int limit=0;
    printf("Enter the limit of Fibonacci series till where you want to see the series \n ");
    
    scanf("%d",&limit);
    printf("1 \t ");
        while(sum<=limit)
        {
            sum=n+m;
            n=m;
            m=sum;
            if(sum<=limit)
			printf("%d \t",sum);
        }
           
            
    
    
    
    return 0;
}

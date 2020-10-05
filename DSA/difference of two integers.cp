#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include <stdio.h>
 
int main()
{
     
    int a,b;
    int diff;
 
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
 
    // check condition to identify which is largest number
    if( a>b )
        diff=a-b;
    else
        diff=b-a;
 
    printf("\nDifference between %d and %d is = %d",a,b,diff);
    return 0;
}

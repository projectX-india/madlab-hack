#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

   int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  
// Driver program to test above function 
int main() 
{ 
    int a = 10, b = 15; 
    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b)); 
    a = 35, b = 10; 
    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b)); 
    a = 31, b = 2; 
    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b)); 
    return 0; 
}

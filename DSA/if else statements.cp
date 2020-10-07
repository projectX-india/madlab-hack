#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
// Program to display a number if it is negative

#include <stdio.h>
int main() {
    int age;

    printf("Enter your age : ");
    scanf("%d", &age);

   
    if (age< 18) 
    {
        printf("You are a minor and cannot vote.\n");
    }

    else if(age >= 25)
        
       printf("You can either stand for elections or you can vote");
    
    else
        
        printf("You can vote");

    return 0;
}

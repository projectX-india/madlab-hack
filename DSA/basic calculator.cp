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
    //write code here
    #include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    char Operator;
    float num1,num2,answer;
    printf("Enter the mathematical Operator you wish to use on the two numbers (+,-,*,/) ");
    scanf("%c",&Operator);
    printf("Enter the first number\n");
    scanf("%f",&num1);
    printf("Enter the second number\n");
    scanf("%f",&num2);

    switch(Operator)
    {
    case '+':
        answer=num1+num2;
        break;
    case '-':
        answer=num1-num2;
        break;
    case '*':
        answer=num1*num2;
        break;
    case '/':
        answer=num1/num2;
        break;
        default:
			printf("The Operator is invalid ");

      }
     printf("The answer of %f%c%f is %f",num1,Operator,num2,answer);


    return 0;
}

    
    
    return 0;
}

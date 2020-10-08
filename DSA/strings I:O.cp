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
    char name[20];
    char college[50];
    char branch[30];
    cout<<"\nEnter your name";
    gets(name);
    cout<<"\nEnter your college:";
    gets(college);
    cout<<"\nEnter your branch:";
    gets(branch);
    cout<<"The details are\n";
    cout<<"\n Name:"<<name;
    cout<<"\n College:"<<college;
    cout<<"\n Branch:"<<branch;
    
    return 0;
}

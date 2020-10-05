#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

int fact(int num){
	if(num==0)
		return 1;
	else if(num>0)
		return num * fact(num-1);
		
}

int main(){
	cout << "Enter the num:- " << endl;
	int num;
	cin >> num;
	cout << "Factorial of the num:- " << fact(num) << endl;
    return 0;
}

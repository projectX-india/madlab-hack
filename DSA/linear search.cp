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
    int n,i,num;
	cout << "Enter the number of items in list" << endl; 
	cin >> n;
	int arr[n];
	for(i=0;i<n;i++)
		cin >> arr[i];
		
	cout << "Enter the num to search for:- ";
	cin >> num;
	
	bool b=false;
	for (i = 0;i<n;i++)
		if(num == arr[i])
			b = true;
	cout << ((b) ? "Found" : "Not Found");
    return 0;
}

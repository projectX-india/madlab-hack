#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

void SoE(int lim){
	
	bool primeNum[lim+1];
	memset(primeNum , true , sizeof(primeNum));
	

	for(int i = 2;i*i <= lim;i++)
	{
		if(primeNum[i]){
			for(int j = i*i; j <= lim; j++)
			{
				if(j%i == 0)
					primeNum[j] = false;
				
			}
		}
	}
	
	for(int i = 2;i <= lim+1 ; i++)
	 	if(primeNum[i])
			cout << i << " ";

}

int main()
{
	cout << "Enter the number upto which prime numbers are to be displayed" << endl;
	int num;
	cin >> num;
	SoE(num);
	return 0;
}

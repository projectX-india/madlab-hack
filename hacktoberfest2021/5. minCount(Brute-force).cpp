#include <bits/stdc++.h>
using namespace std;
int minCount(int n)
{
	//Write your code here
    if(n==0)
        return 0;
    int min1=INT_MAX,z=sqrt(n);
    for(int i=1;i<=z;i++){
        int x=minCount(n-pow(i,2))+1;
        min1=min(x,min1);
    }
    return min1;
}
int main()
{
	int n;
	cin >> n;
	cout << minCount(n);
}

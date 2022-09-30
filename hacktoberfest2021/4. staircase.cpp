#include <iostream>
using namespace std;
long staircase(int n)
	//hello again
{
	//Write your code here
    long a[n+1];
    if(n<=1)
        return 1;
    else if(n==2)
        return 2;
    else if(n==3)
        return 4;
    a[0]=1;
    a[1]=1;
    a[2]=2;
    a[3]=4;
    for(int i=4;i<=n;i++){
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
    return a[n];
}
int main()
{
	int n;
	cin >> n;
	cout << staircase(n);
}

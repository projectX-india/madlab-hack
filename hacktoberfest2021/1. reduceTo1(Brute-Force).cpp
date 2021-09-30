#include <bits/stdc++.h>
using namespace std;
int countMinStepsToOne(int n)
{
	//Write your code here
    if(n==1)
        return 0;
    int x=INT_MAX;
    int y=INT_MAX;
    int z=INT_MAX;
    if(n%3==0)
        x=countMinStepsToOne(n/3);
    if(n%2==0)
        y=countMinStepsToOne(n/2);
    z=countMinStepsToOne(n-1);
    return min(x,min(y,z))+1;
}
int main()
{
	int n;
	cin >> n;
	cout << countMinStepsToOne(n);
}

#include <iostream>
#include <cmath>
#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	if(t<1 || t>1000)
	cin>>t;
	while(t--)
	{
        int a;
        float hra,da;
        cin>>a;
        
        
         if (a >= 1500)
        {
            hra = 500;
            da = 0.98 * a;
        }
        
        else
        {
            hra = 0.10 * a;
            da = 0.90 * a;
        }
        
        
       
        float gs = a + hra + da;
        cout << fixed << setprecision(2) <<gs<<"\n";
	}

}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        int mini=abs(a-c)+abs(b-d);
        if(mini>k||(mini<k&&(k-mini)%2!=0))
         cout<<"NO\n";
        else
         cout<<"YES\n";
    }
	return 0;
}

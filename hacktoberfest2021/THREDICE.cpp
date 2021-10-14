#include <iostream>
using namespace std;

int main() {
	
	int T;
	cin>>T;
    
    while(T--)
    {
        int x, y;
        cin >> x >> y;
        int sum = x+y;
        int p = 6-sum;
        if(p<0) p =0;
        
        float ans = p/6.0;
        
        cout<<ans<<endl;
    }
	return 0;
}

#include <iostream>
using namespace std;

int main(){
    int a, b, c, n, sum = 0;
    cin >> a;
    for(int i = 0; i<a;i++)
    {
        cin >> b >> c;
        for(int j = 0; j<b;j++)
        {
            sum = 0;
            for(int n = 1; n<=c;n++)
            {
                sum += n;
            }
            c = sum;
        }
        cout << sum << endl;
    }
    return 0;
}

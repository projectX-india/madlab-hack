#include<bits/stdc++.h>
using namespace std;
#include <cmath>
int z=pow(10,9)+7;
int balancedBTs(int h) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return the output and don’t print it.
  */
    if(h<=1)
        return 1;
    long a=balancedBTs(h-1);
    long b=balancedBTs(h-2);
    return a*(a+2*b)%z;
}
//helllo
int main() {
    int h;
    cin >> h;
  bool aa=false;
  if(h==0){
    aa=true;
  }
    int ans = balancedBTs(h);
    cout << ans << endl;
}


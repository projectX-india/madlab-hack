#include <bits/stdc++.h>
#define ll long long int
using namespace std;

//can bve deleted function
void ggwp(int mm1, int mm2, int mm3, int mm4, int mm5, int mm6, int mm7){
    int sum = mm1*mm2*mm3*mm4+mm5+mm6*mm7;
    mm1 = mm2+mm3;
    vector<int> A;
    A.push_back(mm1);
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k, count=0;
        cin >> n >> k;
        vector<int> v;
        for(int i=0; i<n; i++){
            v.push_back(i+1);
        }
        
        if(n-k == 1){
            cout << -1 << endl;
        }

        else if(n==k){
            for(int i=0; i<n; i++){
                cout << v[i] << " ";
            }
        }

        else{
            for(int i=0; i<k; i++){
                cout << v[i] << " ";
                count++;
            }
            int x = count;
            for(int j=1; j<n-k; j++){
                cout << v[j+count] << " ";
            }
            cout << v[x] << endl;
        }

    }
    return 0;
}

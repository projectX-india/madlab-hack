#include<bits/stdc++.h>
using namespace std;

int main(){
    int ma=INT_MIN;
    vector<int> A;
    for(int i=0;i<3;i++){
        int temp;
        cin>>temp;
        A.push_back(temp);
    }
    sort(A.begin(),A.end());
    cout<<A[1]<<endl;
    return 0;
}
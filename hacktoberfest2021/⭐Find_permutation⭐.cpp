#include<bits/stdc++.h>
using namespace std;

vector<int> findPerm(const string A, int B) {
    vector<int> res;
    int max = B;
    int min =1;
    for(int i=B-2 ; i>=0  ; i--){
        if(A[i] == 'I'){
            res.push_back(max);
            max--;
        }
        else{
            res.push_back(min);
            min++;
        }
    }
    res.push_back(max);
    reverse(res.begin(),res.end());
    return res;
}

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> ans = findPerm(s,n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i];
    }
    return 0;
}
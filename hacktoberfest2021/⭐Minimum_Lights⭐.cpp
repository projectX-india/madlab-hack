#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int B) {
    int n = (int)A.size(), i = 0, ans = 0;
    if(B == 0)
        return -1;
    while(i<n)
    {
        int idx = -1;
        for(int j=max(0, i-B+1);j<min(n,i+B);j++)
        {
            if(A[j] == 1)
                idx = j;
        }
        if(idx == -1)
            return -1;
        ans++;
        i = idx+B;
    }
    return ans;
}

int main(){
    int n, b;
    cin>>n>>b;
    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    int ans = solve(v,b);
    cout<<ans<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void recurpermute(int index,vector<int> &nums,vector<vector<int>> &ans){
    if(index==nums.size()){
        ans.push_back(nums);
        return ;
    }
    for(int i=index;i<nums.size();i++){
        swap(nums[index],nums[i]);
        recurpermute(index+1,nums,ans);
        swap(nums[index],nums[i]);
    }
}
int main(){
    int n; 
    cin>>n;
    vector<int>nums;
    for(int i=1;i<=n;i++){
        int c;
        cin>>c;
        nums.push_back(c);
    }
    vector<vector<int>> ans;
    int z=-1;
    recurpermute(0,nums,ans);

cout<<"permutations :<<endl;
for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}


    return 0;
    }

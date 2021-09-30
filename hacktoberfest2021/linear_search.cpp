#include<iostream>
#include<vector>
using namespace std;

/*
Task:
1. 
*/

int linear_search(vector<int> arr, int k){
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==k)
        {
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> arr;
    arr.push_back(1);arr.push_back(3);arr.push_back(2);arr.push_back(5);
    
    cout<<linear_search(arr, 3)<<endl;
    
    return 0;
}

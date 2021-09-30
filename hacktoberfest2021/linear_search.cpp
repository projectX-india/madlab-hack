#include<iostream>
#include<vector>
using namespace std;

/*
Task:
1. 
*/

int linear_search(vector<int> arr, int k)
{
    int pos = 0;
    for (auto &it : arr)
    {
        if (it == k)
        {
            return pos;
        }
        pos++;
    }
}
int main(){
    vector<int> arr;
    arr.push_back(1);arr.push_back(3);arr.push_back(2);arr.push_back(5);
    
    cout<<linear_search(arr, 3)<<endl;
    
    return 0;
}

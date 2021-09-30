#include<iostream>
#include<vector>
using namespace std;

/*
Task:
1. 
*/

int linear_search(vector<int> arr, int k){

    int left = 0;
    int length = arr.size();
    int position = -1;
      int right = length - 1;
       
    // Run loop from 0 to right
    for(left = 0; left <= right;)
    {
         
        // If search_element is found with
        // left variable
        if (arr[left] == search_Element)
        {
             
            position = left;
            cout << "Element found in Array at "
                 << position + 1 << " Position with "
                 << left + 1 << " Attempt";
                
            break;
        }
       
        // If search_element is found with
        // right variable
        if (arr[right] == search_Element)
        {
            position = right;
            cout << "Element found in Array at "
                 << position + 1 << " Position with "
                 << length - right << " Attempt";
                
            break;
        }
        left++;
        right--;
}
int main(){
    vector<int> arr;
    arr.push_back(1);arr.push_back(3);arr.push_back(2);arr.push_back(5);
    
    cout<<linear_search(arr, 3)<<endl;
    
    return 0;
}

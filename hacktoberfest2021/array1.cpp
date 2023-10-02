// #include <iostream>
// using namespace std;
// void reversal_array(int *arr,int n){
//     int i=0;
//     int j=n-1;
//     while(i<j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
// }
// int main() {
//     int arr[]={1,2,3,4};
//     reversal_array(arr,4);
//     for(auto x:arr){
//         cout<<x<<" ";
//     }
// }

#include<bits/stdc++.h>
using namespace std;

int main(void){
    vector<int> v1;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    reverse(v1.begin(),v2.begin());

    for(int i=0;i<v1.size();++i){
        cout<<v1[i]<<",";
    }
}

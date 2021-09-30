#include <iostream>
using namespace std;
void reversal_array(int *arr,int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main() {
    int arr[]={1,2,3,4};
    reversal_array(arr,4);
    for(auto x:arr){
        cout<<x<<" ";
    }
}

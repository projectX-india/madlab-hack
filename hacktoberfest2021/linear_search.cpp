#include <iostream>
using namespace std;
 
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++){
        if (arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main() {
    int n,x;
    cin >> n >> x;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
   
    int result = linearSearch(arr, n, x);
    if(result == -1){
        cout << "Element is not present in array" << endl;
    }
    else{
        cout << "Element is present at index " << result << endl;
    }
    return 0;
}

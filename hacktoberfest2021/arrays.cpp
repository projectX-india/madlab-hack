#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mod 1000000007
#define Pi 3.1415926536
#define vec vector<int>
#define pb emplace_back
#define all(v) v.begin(), v.end()
#define fastIO {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);}
#define get_unique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}

/*
Task:
1. make an array of size 10
2. initialize the array with zeroes
3. put the values 10-1 in the array using loop
4. sort the array using inbuilt sort function
*/

signed main(){
    int n = 10;
    
    // task-1 declaration of array
    int arr[n];
    int arr2[n+1];
    // task-2 initialization of array
    for(int i=0; i<n; i++)
        arr[i] = 0;

    // task-3
    for(int i=0; i<n; i++)
        arr[i] = n - i;

    // task-4 Sorting
    sort(arr, arr + n);

    // Output
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}

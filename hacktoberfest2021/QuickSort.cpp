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

void swap(int* a, int* b){
	//write here the code for swap
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = low;

	for (int j = low; j < high; j++){
		if (arr[j] < pivot){
			swap(&arr[i], &arr[j]);
			i++;
		}
	}
	swap(&arr[i], &arr[high]);
	return i;
} 

void quickSort(int arr[], int low, int high){
	if (low < high){
		int pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	} 
} 


signed main(){
    //fastIO
    int n = 10;

    int arr[n];

    for(int i=0; i<n; i++)
        arr[i] = n-i;

    quickSort(arr, 0, n);

    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}

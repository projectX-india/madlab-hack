
/*
    Task: To implement
    Selection Sort
    in C++
*/

#include <bits/stdc++.h>
using namespace std;
 
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

//Selection Sort function
//finding the minimum element
//and swapping with the first element
void Selection_Sort(int arr[], int n)
{
    int min_ind;

    for (int i = 0; i < n-1; i++)
    {
        min_ind = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
                min_ind = j;
        }
        swap(arr[min_ind], arr[i]);
    }
}

void print(int arr[], int len)
{
    for (int i=0; i < len; i++)
        cout<< arr[i] << " ";
    cout<< endl;
}


int main()
{
    int arr[] = {23, 78, 11, 90, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    Selection_Sort(arr, n);
    cout << "Sorted array: \n";
    print(arr, n);
    return 0;
}
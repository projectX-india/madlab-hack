// algorithm for bubble sort
#include <iostream>

using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            //last i elements are already in place 
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    int arr[10] = {}, n, key;
    cout << "Enter the number of elements in array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}

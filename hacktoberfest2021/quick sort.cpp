
#include <iostream>
using namespace std;

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

int partision(int arr[], int l, int h)
{

    int pivot = arr[h];
    int i = l - 1;

    for (int j = l; j < h; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[h]);
    return (i + 1);
}

void quicksort(int arr[], int l, int h)
{

    if (l < h)
    {
        int pi = partision(arr, l, h);

        quicksort(arr, l, pi - 1);
        quicksort(arr, pi + 1, h);
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before Sorting: ";
    display(arr, n);
    quicksort(arr, 0, n - 1);
    cout << "Array after Sorting: ";
    display(arr, n);
}

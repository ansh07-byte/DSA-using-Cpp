#include <iostream>
using namespace std;

void merge(int a[], int n, int b[], int m, int c[])
{
    int i = 0, j = 0, k = 0;

    while(i < n && j < m)
    {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i < n)
        c[k++] = a[i++];

    while(j < m)
        c[k++] = b[j++];
}

void mergeSort(int arr[], int n)
{
    // BASE CONDITION
    if(n <= 1)
        return;

    int mid = n / 2;

    int left[mid];
    int right[n - mid];

    // Copy left half
    for(int i = 0; i < mid; i++)
        left[i] = arr[i];

    // Copy right half
    for(int i = 0; i < n - mid; i++)
        right[i] = arr[mid + i];

    // Sort left half
    mergeSort(left, mid);

    // Sort right half
    mergeSort(right, n - mid);

    // Temporary array
    int temp[n];

    // Merge
    merge(left, mid, right, n - mid, temp);

    // Copy back to original array
    for(int i = 0; i < n; i++)
        arr[i] = temp[i];
}

void print(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int arr[] = {2, 3, 89, 54, 452, 7777, 88};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    print(arr, n);

    mergeSort(arr, n);

    cout << "After sorting: ";
    print(arr, n);

    return 0;
}
#include <iostream>
using namespace std;

void reverse(int arr[], int i, int j) {
    while(i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    k = k%n;

    reverse(arr, 0, n-1);
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);

    for(int ele : arr)
        cout << ele << " ";

    return 0;
}

#include <iostream>
#include <climits>
using namespace std;
void reverse(int arr[], int i, int j){
        while (i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main() {
    int arr[] = {2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0])-1;
    int k;
    cin>> k;
    reverse(arr,0,n);
    reverse(arr,0,k-1);
    reverse(arr,k,n);
    for(int ele : arr) cout<< ele << " ";
}

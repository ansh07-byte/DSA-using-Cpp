#include<iostream>
using namespace std;
int main(){
    int arr[] = { 2,45,66,87,33,67,22,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 1;i<n;i++){
        int j = i;
        while(j>=1 && arr[j] < arr[j-1]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
    for(int i = 0;i<n;i++){
        cout<< arr[i] << " ";
    }
}

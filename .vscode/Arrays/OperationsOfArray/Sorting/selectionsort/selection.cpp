#include<iostream>
using namespace std;
int main(){
    int arr[] = { 2,45,66,87,33,67,22,4};
    int n = sizeof(arr)/4;
    for(int i = 0;i<n-1;i++){
        int mx = arr[i], idx = i;
        for(int j = i; j<n;j++){
            if(arr[j] < mx ){
                mx = arr[j];
                idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = temp;
    }
    for(int i = 0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
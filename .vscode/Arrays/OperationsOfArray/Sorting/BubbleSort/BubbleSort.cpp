#include <iostream>
using namespace std;
int main(){
    int arr[] = {2,3,4,33,23};
    int n = sizeof(arr)/4;
    for(int i = 0;i<n-1;i++){
        // int swap = 0;
        for(int j = 0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                // swap++;
            }
        }
        // if(swap == 0) break;
    }
    for(int i = 0;i<n;i++){
        cout<< arr[i] << " ";
    }
}  // best case for taking swap variable
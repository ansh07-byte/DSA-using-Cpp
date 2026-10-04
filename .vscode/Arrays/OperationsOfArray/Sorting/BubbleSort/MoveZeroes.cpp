#include <iostream>
using namespace std;
int main(){
    int arr[] = {2,3,0,4,0,33,23,0};
    int n = sizeof(arr)/4;
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-1-i;j++){
            if(arr[j] == 0){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                // swap++;
            }
        }
    }
    for(int i = 0;i<n;i++){
        cout<< arr[i] << " ";
    }
}  
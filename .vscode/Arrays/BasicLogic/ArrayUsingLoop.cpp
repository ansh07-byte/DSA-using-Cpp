#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< " Enter array size : ";
    cin>> n;
    int arr[n];
    // INPUT
    for(int i = 0; i<= n-1; i++){
        cin>> arr[i];
    }
    // print negative element of array
    for(int i = 0;i<= n-1;i++){
        if (arr[i] < 0){
            cout<< arr[i] << " ";
        }
    }
}
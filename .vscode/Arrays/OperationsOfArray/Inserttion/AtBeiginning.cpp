#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>> arr[i];
    }
    int m = n;
    int nw = 45;
    // Shift all ele in right
    for(int i=m;i>0;i--){
        arr[i] = arr[i-1];
    }
    // Inserting
    arr[0] = nw;
    m++;
    for(int i = 0;i<m;i++){
        cout<< arr[i] << " ";
    }
}
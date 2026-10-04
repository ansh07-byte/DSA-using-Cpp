#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    cout<< endl;
    int arr[n];
    for(int i = 0; i< n;i++){
        cin>> arr[i];
    } 
    // Deletion at any
    int m = n;
    int index ;
    cin>> index;
    for(int i = index; i< m-1;i++){
        arr[i] = arr[i+1];
    }
    m--;

    for(int i = 0;i<m;i++){
        cout<< arr[i] << " ";
    }
}

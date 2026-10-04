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
    // Deletion at end
    int m = n;
    m--;
    for (size_t i = 0; i < m; i++){
        cout<< arr[i] << " ";
    }
}  

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
    int m = n;
    // allocate space 
    int nw = 56;
    arr[m] = nw;
    m++;
    for (int i = 0;i< m;i++){
        cout << arr[i] << " ";
    }

}
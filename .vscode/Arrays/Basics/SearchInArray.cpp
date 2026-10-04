#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the size: ";
    cin>> n;
    int arr[n]; 
    for(int i = 0; i< n; i++){
        cin>> arr[i];
    }
    int flag = 0;
    int target;
    cout << " Enter the target : ";
    cin>> target;
    for (int i = 0; i<n;i++){
        flag = 1;
        break;
    }

    if (flag == 1){
        cout<< " Element found";
    }
    else cout<< " Not found";
}
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>> arr[i];
    }
    int max = INT_MIN;

    for(int i = 0; i<n;i++){
        if(arr[i] > max) max = arr[i];
    }
    int mx = INT_MIN;
    for (int i = 0;i<n;i++){
        if(arr[i] > mx && arr[i] != max){
            mx = arr[i];
        }
    }
    cout<< " The second maximum element is " << mx;
    return 0;
}
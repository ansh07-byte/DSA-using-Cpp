#include <iostream>
using namespace std;
// int main() {
//     int arr[] = { 0,1,0,1,0,1,0,1};
//     int n = sizeof(arr)/4;
//     int zeros = 0;
//     int ones = 0;
//     for(int i = 0;i<n;i++){
//         if(arr[i] == 0) zeros +=1;
//         else ones+=1;
//     }
//     for(int i = 0;i<zeros;i++){
//         cout<< 0 << " ";
//     }
//     for(int i = 0;i<ones;i++){
//         cout<< 1 << " ";
//     }
// }

// 2nd method (swap mtd)
int main(){
    int arr[] = { 0,1,0,1,0,1,0,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0,j=n-1;
    while (i<j){
        if(arr[i] == 0) i++;
        else if(arr[j] == 1) j--;
        else {swap(arr[i],arr[j]);
        i++;
        j--;}
    }
    for(int ele : arr) cout<< ele << " ";
}
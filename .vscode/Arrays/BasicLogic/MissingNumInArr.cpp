#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Method 1 (By nested loop) TC = O(n^2)

// int main(){
// int n;
// cin>> n;
// int arr[n];
// for(int i = 0;i<n;i++){
//     cin>> arr[i];
// }
// for(int i = 0;i<=n;i++){
//     int flag = 0;
//     for(int ele : arr){

//         if(ele == i){
//             flag = 1;
//             break;
//         }
//     }
//     if(flag == 0){
//         cout<< i;
//     }
// }
//  return 0;
//}

// 2nd mtd (By sorting )   TC = o(n log n)
// int main(){
// int n;
// cin>> n;
// vector<int> arr = {n};
// for(int i = 0;i<n;i++){
//     cin>> arr[i];
// }
// sort(arr.begin(),arr.end());
// int found = 0;
// for(int i = 0;i<n;i++){
//     if(arr[i] != i) {
//         cout << i;
//         found = 1;
//         break;
//     }
// }
// if (found == 0){
//     cout << n << " ";
// }
// return n;
//}

// 3rd method (Maths)      TC = O(n)
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int sm = n * (n + 1) / 2;
    cout << sm - sum;
}
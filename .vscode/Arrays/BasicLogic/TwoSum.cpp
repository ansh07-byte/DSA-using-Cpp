#include <iostream>
using namespace std;
int main()
{
    // int arr[] = {2,7,11,15};
    // int n = sizeof(arr)/4;
    // int target = 9;
    // int i = 0,j =  n-1;
    // while (i<j){
    //     if(arr[i]+arr[j] == target) { cout<< arr[i] << " " << arr[j];
    //         break;}
    //     else if (arr[i] + arr[j] < target) {
    //         i++;
    //     }
    //     else {
    //         j--;
    //     }
    // }

    // 2nd mtd for printing indices.
    int arr[] = {2, 7, 11, 15};
    int arr1[2];
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                arr1[0] = i;
                arr1[1] = j;
                break;
            }
        }
    }
    for (int ele : arr1)
        cout << ele << " ";
    return 0;
}

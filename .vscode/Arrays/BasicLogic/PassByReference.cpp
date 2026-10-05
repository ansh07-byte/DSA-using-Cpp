#include <iostream>
using namespace std;
void change (int arr[]){
    arr[1] = 4;
    cout << arr[1]; // pass by reference as it doesnot gives the local value in the int main....
}

int main() {
    int arr[] = {2,3,4,5,6};
     change(arr);
}
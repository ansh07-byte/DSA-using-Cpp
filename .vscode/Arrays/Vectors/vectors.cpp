#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(5,19); // default value = 19
    for(int i = 0 ; i< arr.size();i++){
        cout<< arr[i] << " ";
    }
    arr.push_back(22);// add element at last 
    arr.pop_back(); // removes element of last
}
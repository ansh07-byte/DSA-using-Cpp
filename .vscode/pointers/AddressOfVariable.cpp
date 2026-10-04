#include<iostream>
using namespace std;
int main(){
    int x = 9;  // uses 4 bytes
    int* ptr = &x;  // it stores the x address 
    cout<< &x<<endl;
    cout<< ptr<< endl;
    cout << &ptr<< endl; 
}
// A pointer is a variable that stores the address of another variable..

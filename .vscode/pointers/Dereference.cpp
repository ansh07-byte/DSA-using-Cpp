#include<iostream>
using namespace std;
int main(){
    int x = 8;
    int* p1 = &x;
    *p1 = 10;
    cout<<*p1<<endl;  // * = dereference operator
    cout<<x<<endl;
}
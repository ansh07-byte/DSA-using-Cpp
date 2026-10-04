#include <iostream>
using namespace std;
int x ; // global
void print(int n){
    if(n>x) return; // base case
    cout<< n  << endl; // work
    print(n+1);  // call
}
int main(){

    cin>> x;
    print(1);
}

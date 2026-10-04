#include <iostream>
using namespace std;
void print(int n){
    if(n==0) return; // base case
    cout<< n  << endl; // work
    print(n-1);  // call    // if i reverse the work and call then output is also reverse ........
}
int main(){
    int x ;
    cin>> x;
    print(x);
}

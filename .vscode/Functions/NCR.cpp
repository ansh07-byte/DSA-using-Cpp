#include <iostream>
using namespace std;
int factorial(int x){
    int fact = 1;
    for(int i = 1;i<= x; i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cin>> n;
    int r;
    cin>> r;
    if (r> n){
        cout<< "Invalid";
    }
    else{
    cout<< "the ncr = " << factorial(n)/factorial(r) * factorial(n-r);
    }  
}
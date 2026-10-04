#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int key = 0;
    for(int i = 2; i< n;i++){
        if(n%i==0){
            cout<< "It is a composite number"<< endl;
            key = 1;
            break;
        }
    }
    if (key == 0){
        cout<< "It is a prime number";
    }
    return 0;
}
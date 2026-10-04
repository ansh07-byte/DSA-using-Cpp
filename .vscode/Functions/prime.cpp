#include<iostream>
using namespace std;
void prime(int n){
    int key = 0;
    for(int i = 2; i<  n;i++){
        if(i%2== 0){
            cout<< "Not prime";
            key = 1;
            break;
        }
    }
    if (key == 0){
        cout<< "Prime";
    }
}
int main(){
    int x;
    cin>> x;
    prime(x);
}
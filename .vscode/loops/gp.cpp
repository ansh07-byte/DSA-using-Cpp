#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int terms = 1 ;
    for(int i = 0; i<=n;i++){
            cout<<terms<< " ";
            terms*=2;
    }
}

#include<iostream>
using namespace std;
int main(){
    int p ;
    float r;
    int t;
    cout<< "Enter principle: ";
    cin>> p;
    cout<< "Enter rate: ";
    cin>> r;
    cout<< "Enter year: ";
    cin>> t;
    float SI = (p*r*t)/100300;
    cout<< "the SI is: "<< SI;

}
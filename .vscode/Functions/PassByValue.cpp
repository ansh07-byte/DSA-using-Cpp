#include<iostream>
using namespace std;
int n = 45;
void change(){
    int n = 45;

}
int main(){
    int n = 55;
    cout<< n<< endl;
    change();
    cout<< n<< endl; // pass by value 
}
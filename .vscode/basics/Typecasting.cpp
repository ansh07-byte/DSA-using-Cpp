#include<iostream>
using namespace std;
int main(){
    char x = 'z';
    int ascii = (int)x; // explicit typecasting
    int Ascii = x;  // implicit typecasting
    cout<<ascii<<endl;
    cout<<Ascii;
}
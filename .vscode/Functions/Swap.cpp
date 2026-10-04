#include<iostream>
using namespace std;
void swap(int& x, int& y){ // alias  that access local variable 
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int x = 7, y = 8;
    swap (x,y);
    cout<< x << " " << y;

}
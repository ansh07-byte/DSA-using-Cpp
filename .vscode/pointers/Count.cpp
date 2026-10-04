// count the digit using function without returning value and also without print the count
#include <iostream>
using namespace std;
void count(int n, int* p){
    int count = 0;
    if (n== 0){
        count = 1;
    }
    while (n!= 0){
        count ++;
        n/= 10;
    }
    *p = count;          // use of pointer 
    cout<< *p << endl;
}
int main(){
    int x ;
    cin >> x;
    int c = 0;
    count(x , &c);
}
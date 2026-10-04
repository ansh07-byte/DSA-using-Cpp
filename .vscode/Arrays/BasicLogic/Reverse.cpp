#include <iostream>
using namespace std;
int main(){
    int v[] = { 2, 3, 4, 5, 6};
    int i = 0, j= sizeof(v)/4 -1;
    while(i!=j){ // or (i<j)
        swap(v[i],v[j]);
        i++;
        j--; 
    }
    for(int ele : v) cout << ele << " ";
}
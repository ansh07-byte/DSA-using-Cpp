#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {2, 4, 5, 6, 8};
    for(int i = 0; i< v.size(); i++) {
        cout<< v[i] << " " << endl;
    }
    for(int ele : v) {   // same as for loop 
        cout << ele << " ";
    }
}
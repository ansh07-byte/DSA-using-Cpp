#include <iostream>
#include <vector>
using namespace std;
// void change(vector<int> &v){    // if ampercent(&) is there then defenitely it passes by reference 
//     v[2] = 22;

// }
void change(vector<int> v){ 
    v[2] = 22;

}
int main() {
    vector<int> v = { 2, 3 ,45, 66};
    change(v);
    cout<< v[2]<< endl;
}

// vector is pass by value ....
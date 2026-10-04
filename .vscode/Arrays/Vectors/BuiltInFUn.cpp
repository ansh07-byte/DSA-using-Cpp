#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {4, 2, 66, 32, 7, 45};

    sort(v.begin(), v.end());

    for (int ele : v)
        cout << ele << " ";

    cout<< endl;    

    reverse(v.begin(), v.end());
    for(int ele : v) cout << ele << " ";
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

/*
Task:
1. implement a vector in c++
2. initialize the vector with values
3. iterate over the vector using the auto keyword
*/

int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    for (auto &it : v)
    {
        cout << it << ' ';
    }

    return 0;
}

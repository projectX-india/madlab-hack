#include<iostream>
using namespace std;

/*
Task:
1. implement a vector in c++
2. initialize the vector with values
3. iterate over the vector using the auto keyword
*/

int main(){
    vector<int>s;
    s.push_back(11);
    s.push_back(22);
    s.push_back(33);
    s.push_back(55);
    for (vector<int>::iterator it = s.begin(); it!=s.end(); it++) {
    cout << *it << endl;
}
    return 0;
}

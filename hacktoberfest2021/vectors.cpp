#include<iostream>
# include <vector>
using namespace std;

/*
Task:
1. implement a vector in c++
2. initialize the vector with values
3. iterate over the vector using the auto keyword
*/

int main(){

    int aa=10;
=======
    int n = 10;


    // 1. implement a vector in c++
    vector <int> v;

    //2. initialize the vector with values
    for(int i=1; i<=n; i++)
        v.push_back(i);

    //3. iterate over the vector using the auto keyword
    for(auto it:v)
        cout << it << " ";
    cout << endl;

    return 0;
}

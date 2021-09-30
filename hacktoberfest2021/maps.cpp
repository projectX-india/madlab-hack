#include<iostream>
#include <iterator>
#include <map>
using namespace std;


#include <bits/stdc++.h>
using namespace std;
 
void printFrequency(vector<int> vec)
{
    // Define an map
    map<int, int> M;
 
    // Traverse vector vec check if
    // current element is present
    // or not
    for (int i = 0; vec[i]; i++) {
 
        // If the current element
        // is not found then insert
        // current element with
        // frequency 1
        if (M.find(vec[i]) == M.end()) {
            M[vec[i]] = 1;
        }
 
        // Else update the frequency
        else {
            M[vec[i]]++;
        }
    }
 
    // Traverse the map to print the
    // frequency
    for (auto& it : M) {
        cout << it.first << ' '
             << it.second << '\n';
    }
}
 
// Driver Code
int main()
{
    vector<int> vec = { 1, 2, 2, 3, 1, 4, 4, 5 };
 
    // Function call
    printFrequency(vec);
=======
/*
Task:
1. implement a vector and initialize it with random values
2. implement maps in c++ to store freq of numbers
3. print the number & freq of the given numbers
*/

int main(){

    map<int,int> mp;

    map<int, int> gquiz1;
    // insert elements in random order
    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    
     // printing map gquiz1
    map<int, int>::iterator itr;
    cout << "\nThe map gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;
    // print all elements of the map gquiz2
    cout << "\nThe map gquiz2 after"
         << " assign from gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;
    

    return 0;
}

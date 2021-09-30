#include<iostream>
using namespace std;

/*
Task:
1. implement sets in c++ 
*/

int main(){
    
    set<int, greater<int> > s1;
 
    s1.insert(40);
    s1.insert(30);
 
    set<int, greater<int> >::iterator itr;
    cout << "\nThe set s1 is : \n";
    for (itr = s1.begin(); itr != s1.end(); itr++)
    {
        cout << *itr<<" ";
    }
    cout << endl;
 
    set<int> s2(s1.begin(), s1.end());
 
    for (itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout << *itr<<" ";
    }
    cout << endl;
    cout
        << "\ns2 after removal of elements less than 30 :\n";
    s2.erase(s2.begin(), s2.find(30));
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout <<*itr<<" ";
    }
    int num;
    num = s2.erase(50);
    cout << "\ns2.erase(50) : ";
    cout << num << " removed\n";
    for (itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout <<*itr<<" ";
    }
 
    cout << endl;
    
    set<int> s;
    s.insert(1);
    s.insert(1);
    cout<<s.size()<<'\n';
    s.insert(2);
    cout<<s.size()<<'\n';
    // set size will be 2
    auto pos=s.find(1);
    if(pos!=s.end())
    {
        cout<<"element found\n";
    }
    else 
    {
        cout<<"element not found\n";
    }
    // if s.end()!=pos then element found
    s.clear();
    //clear the set
    return 0;
}

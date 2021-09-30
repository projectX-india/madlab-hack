#include<iostream>
using namespace std;

/*
Task:
1. implement sets in c++ 
*/

int main(){
    set<int> s;
    s.insert(1);
    s.insert(1);
    cout<<s.size()<<'\n';
    // set size will  be 1
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

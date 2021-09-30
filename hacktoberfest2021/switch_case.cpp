#include<iostream>
using namespace std;

/*
Task:
1. implement switch case in c++
*/

int main(){

    int choice;
    cout << "Enter your choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "You entered 1";
        break;
    case 2:
        cout << "You entered 2";
        break;
    case 3:
        cout << "You entered 3";
        break;
    default:
        break;
    }

int test = 3;
switch (test) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
}
    
    

    return 0;
}

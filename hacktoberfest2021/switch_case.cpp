#include <iostream>

using namespace std;

int main()
{
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

    return 0;
}

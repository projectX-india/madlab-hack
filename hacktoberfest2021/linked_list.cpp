#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> linkedList;
    for (int i = 0; i < 5; i++)
    {
        int element;
        cout << "Enter an element to add to the Linked List : ";
        cin >> element;
        linkedList.push_back(element);
    }
    cout << "The linked list is :- ";
    for (auto &it : linkedList)
    {
        cout << it << ' ';
    }

    return 0;
}

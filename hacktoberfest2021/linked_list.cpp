#include<iostream>
#include<list>
using namespace std;


/*
Task:
1. implement a linked list and print it
*/

int main(){
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




class Node {
public:
    int data;
    Node* next;
};
 
// This function prints contents of linked list
// starting from the given node
void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}
 
// Driver code
int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
 
    // allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();
 
    head->data = 1; // assign data in first node
    head->next = second; // Link first node with second
 
    second->data = 2; // assign data to second node
    second->next = third;
 
    third->data = 3; // assign data to third node
    third->next = NULL;
 
    printList(head);
 

    return 0;
}

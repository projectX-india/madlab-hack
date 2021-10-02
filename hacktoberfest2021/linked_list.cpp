
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> linkedList;
    for (int i = 0; i < 5; i++)

#include<iostream>
using namespace std;

/*
Task:
1. implement a linked list and print it
*/

class linked_list
{
    public:
    int data;
    linked_list *next;
};

linked_list *insert_at_beginning(linked_list *head , int x)
{
    linked_list *nn = new linked_list;
    nn->data = x;
    nn->next = NULL;
    if(head==NULL)
    {
        head = nn;
    }
    else
    {
        nn->next = head;
        head = nn;
    }
    return head;
}
    
void display(linked_list *head)
{
    linked_list *ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}
    
int main()
{
    linked_list *first = NULL;
    first = insert_at_beginning(fisrt , 10);
    first = insert_at_beginning(fisrt , 20);
    first = insert_at_beginning(fisrt , 30);
    first = insert_at_beginning(fisrt , 50);
    first = insert_at_beginning(fisrt , 60);
    display(first);
    return 0;
}

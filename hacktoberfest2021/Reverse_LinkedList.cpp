#include <iostream>     
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
node *head , *temp , *newnode , *prev , *cnode , *nextnode;
void display()    // display of the linked list
{
    cout<<"The linked list is "<<endl;
    temp  = head;
    while(temp!=0)
    {
        cout<<temp->data;
        temp = temp->next;
    }
    cout<<endl;
}

void reverse()             // reverse the linked list
{
    node *prev;
    prev = 0;
    cnode = nextnode = head;
    while(nextnode!=0)
    {
        nextnode = nextnode->next;
        cnode->next = prev;
        prev = cnode;
        cnode = nextnode;
    }
    head = prev;
    display();
}
int main()
{
    head = 0;
    int c = 1;
    while(c)
    {
        newnode = new node;
        cout<<"Enter the data to enter in the linked list"<<endl;
        cin>>newnode->data;
        newnode->next = 0;
        if(head == 0)
        {
            temp = head = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        cout<<"Do you want to enter more data"<<endl;
        cin>>c;
    }
    
    display();
    reverse();
}

#include<iostream>
using namespace std;

/*
Task:
1. implement a linked list and print it
*/

class node
{
    public:
    int data;
    node* next;
};
node*head=NULL;

node* insertion(node* head,int data)
{
    node* nnode=new node;
    nnode->data=data;
    node*temp=head;
    if(head==NULL)
    {
        head=nnode;
        nnode->next=NULL;
    }
    else
    {
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=nnode;
        nnode->next=NULL;
    }
    return head;
}

node* display(node*head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return head;
}

        

int main(){
    head=insertion(head,10);
    head=insertion(head,60);
    head=insertion(head,20);
    head=insertion(head,40);
    head=insertion(head,50);
    head=insertion(head,30);
    head=display(head);
    return 0;
}

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class linked_list
{
    public:
    int data;
    linked_list *next;
};

void display(linked_list *head)
{
    linked_list *temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

linked_list *insertNode(linked_list *head, int num)
{
    linked_list *new_node = new linked_list;
    new_node->data = num;
    new_node->next = head;
    head = new_node;
    return head;
}

linked_list *reverse(linked_list *head)
{
    linked_list *prev = NULL;
    linked_list *next = NULL;
    linked_list *current = head;
    while (current!=NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

int main()
{
    linked_list *first = NULL;
    first = insertNode(first,6); 
    first = insertNode(first , 8);
    first = insertNode(first , 90);
    first = insertNode(first , 67);
    first = insertNode(first , 89);
    display(first);
    first = reverse(first);
    display(first);
    return 0;
}
    


#include <iostream>
using namespace std;

struct Node {
    int value;
    struct Node* next;
    Node(int data)
    {
        this->value = data;
        next = NULL;
    }
};

//reversing a linked list
Node* reverse(Node* head)
{
    Node* curr = head; //current node
    Node *prev = NULL; //previous mode
    Node* next = NULL; //following node

    while (curr != NULL)
    {
        next = curr->next;

        //reverse the links
        curr->next = prev;

        //iterate further
        prev = curr;
        curr = next;
    }
    return prev;
}

void print(Node* head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
}

Node* add_data(Node* head, int data)
{
    Node* new_node = new Node(data);
    new_node->next = head;
    return new_node;
}


int main()
{
    //create nodes
    Node* head = new Node(20);
    head = add_data(head, 4);
    head = add_data(head, 15);
    head = add_data(head, 22);
    
    cout << "Given linked list\n";
    print(head);

    head = reverse(head);
    cout << "\nReversed Linked list \n";
    print(head);
    return 0;
}
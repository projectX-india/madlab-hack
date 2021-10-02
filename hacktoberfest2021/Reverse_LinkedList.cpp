#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		Node(int data){
			this->data=data;
			next=NULL;
		}
};
Node* takeinput(){
	int data;
	cin>>data;
	Node *head=NULL;
	while(data!=-1){

Node *newNode=new Node(data);
if(head==NULL){
		head=newNode;
}
else{
 Node *temp=head;
 while(temp->next!=NULL){
 	temp=temp->next;
 }
	temp->next=newNode;
}
	cin>>data;	
	}
	return head;
}
void print(Node *head){

		while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}
Node *reverse(Node *head){
	Node *prevptr=NULL;
	Node *currptr=head;
	Node *nextptr;
	while(currptr!=NULL){
		nextptr=currptr->next;
		currptr->next=prevptr;
		prevptr=currptr;
		currptr=nextptr;
	}
	return prevptr;
}
int main(){
	Node *head=takeinput();
	print(head);
	cout<<"original linked list:"<<endl;
 Node *h=reverse(head);
    cout<<"reversed linked list:"<<endl;
 	print(h);
	return 0;
}

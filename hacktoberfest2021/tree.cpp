#include<iostream>

using namespace std;

 class Node{
     public:
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this->data=data;
    }
}
 int idx=0;
public static Node* constructtree(vector<int> arr)
{
      if(idx>=arr.length || arr[idx]==-1)
       {
           idx++;
           return nullptr;
       }
    Node* node=new Node(arr[idx++]);
    node->left=constructtree(arr);
    node->right=constructtree(arr);

    return node;

}

 void display(Node* node)
{
    if(node==null)
    {
        return;
    }

    string str="";
    str+=((node.left!=null)?node->left->data:".");
    str+="<-"+node->data+"->";
    str+=((node->right!=null)?node->right->data:".");

    cout<<str<<endl;
    display(node->left);
    display(node->right);

}
int main()
{
    vector<int> arr={10,20,40,-1,-1,50,80,-1,-1,90,-1,-1,30,60,100,-1,-1,-1,70,110,-1,-1,120,-1,-1};
        Node* root=constructtree(arr);
        display(root);
}

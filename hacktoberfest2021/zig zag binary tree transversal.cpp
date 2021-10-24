#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;

#include<stack>
void zigZagOrder(BinaryTreeNode<int> *root) {
    // Write your code here
    int i = 1;
    if(root == NULL){
        return;
    }
    queue<BinaryTreeNode<int> *> pendingNodes;
    stack<int> st;
    
    pendingNodes.push(root);
    pendingNodes.push(NULL);
	while(pendingNodes.size()!=0){
        BinaryTreeNode<int> *front = pendingNodes.front();
        if(front == NULL){
            pendingNodes.pop();
            if(pendingNodes.size() == 0){
                if(i%2 == 0){
                while(!st.empty()){
                    cout<< st.top()<<" ";
        			st.pop();
                }
            }
                break;
            }
            if(i%2 == 0){
                while(!st.empty()){
                    cout<< st.top()<<" ";
        			st.pop();
                }
            }
            cout<<endl;
            pendingNodes.push(NULL);
            i++;
            continue;
        }
        pendingNodes.pop();
        if(i%2 == 1){
	        cout<<front->data<<" ";

        	if(front->left !=NULL){
            	pendingNodes.push(front->left);
        	}
        	if(front->right !=NULL){
            	pendingNodes.push(front->right);
        	}
        }
        if(i%2 == 0){
        	st.push(front->data);
        	if(front->left !=NULL){
            	pendingNodes.push(front->left);
        	}
            if(front->right !=NULL){
            	pendingNodes.push(front->right);
        	}
        }
    }    
}

BinaryTreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    zigZagOrder(root);
}

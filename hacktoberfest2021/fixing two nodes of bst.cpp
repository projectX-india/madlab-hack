  void solve(Node* root,vector<Node*> &pts, Node **prev){
      if(root==NULL) return;
      solve(root->left,pts,prev);
      if(*prev!=NULL&&(*prev)->data>root->data){
          if(pts[1]==NULL){
            pts[0]=*prev;
            pts[1]=root;
          }else{
              pts[2]=root;
          }
      }
      *prev=root;
      solve(root->right,pts,prev);
  }
    void correctBST( struct Node* root )
    {
        vector<Node*> pts(3,NULL);
        Node* prev=NULL;
        solve(root,pts,&prev);
        if(pts[2]==NULL){
            swap(pts[0]->data,pts[1]->data);
        }else{
            swap(pts[0]->data,pts[2]->data);
        }
    }

//python code 
# Python3 program for the above approach

# Define the Node class to create new nodes


class Node:
	def __init__(self, data):
		self.data = data
		self.left = None
		self.right = None

# Define the function to create new nodes


def newNode(data):
	return Node(data)

# Define the function to store the inorder traversal of the tree in a vector


def storeInVector(root, vec):
	if root is None:
		return
	storeInVector(root.left, vec)
	vec.append(root.data)
	storeInVector(root.right, vec)

# Define the function to correct the BST


def correctBSTUtil(root, vec, index):
	if root is None:
		return index
	index = correctBSTUtil(root.left, vec, index)
	root.data = vec[index]
	index += 1
	index = correctBSTUtil(root.right, vec, index)
	return index

# Define the main function to correct the BST


def correctBST(root):
	# create a vector to store the inorder traversal of the given tree
	vec = []
	storeInVector(root, vec)
	# sort the vector to obtain the correct inorder traversal of the BST
	vec.sort()
	index = 0
	correctBSTUtil(root, vec, index)

# Define the function to print the inorder traversal of the tree


def printInorder(root):
	if root is None:
		return
	printInorder(root.left)
	print(root.data, end=' ')
	printInorder(root.right)


# Define the main function to run the code
if __name__ == '__main__':
	# create the original tree
	root = newNode(6)
	root.left = newNode(10)
	root.right = newNode(2)
	root.left.left = newNode(1)
	root.left.right = newNode(3)
	root.right.right = newNode(12)
	root.right.left = newNode(7)

	# print the inorder traversal of the original tree
	print("Inorder Traversal of the original tree")
	printInorder(root)

	# correct the BST
	correctBST(root)

	# print the inorder traversal of the fixed tree
	print("\nInorder Traversal of the fixed tree")
	printInorder(root)

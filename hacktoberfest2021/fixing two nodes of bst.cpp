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
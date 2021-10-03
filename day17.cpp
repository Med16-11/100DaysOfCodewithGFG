//Check for BST 
void findBST(Node* root, Node* &prev,int &f){
        if(!root)
            return;
        findBST(root->left,prev,f);
        
        if(prev!=NULL and root->data <= prev->data){
            f=0;
            return;
        }
        
        prev=root;
        findBST(root->right,prev,f);
    }
    
    
    bool isBST(Node* root) 
    {
        // Your code here
        int f = 1;
        Node *prev = NULL;
        findBST(root,prev,f);
        return f;
    }

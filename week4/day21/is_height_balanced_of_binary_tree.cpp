/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

int balance(BinaryTreeNode<int>* node)
{
    if(node == nullptr) return 0;
    int l=balance(node->left);
    int r=balance(node->right);
    
    if(l==-1 || r==-1) return -1;
    if(abs(l-r)>1) return -1;
    
    return 1+max(l,r);
}

bool isBalancedBT(BinaryTreeNode<int>* root) {
    // Write your code here.
  int a= balance(root);
    if(a>0) return true;
    else return false;
    
}
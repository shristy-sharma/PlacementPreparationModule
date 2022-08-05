/*
    Following is the Binary Tree node structure:

    class BinaryTreeNode {
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
*/
bool search(BinaryTreeNode<int> *root, int x)
{
    if( root==NULL ) return false; 
    if(root->data==x ) return true;
    if(root->data>x && root->left!=NULL)  return search(root->left,x);
    if(root->data<x && root->right!=NULL)
       return  search(root->right,x);
    return false;
}

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
     return search(root,x);
    
}
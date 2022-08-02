/************************************************************

    Following is the Binary Tree node structure:

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


************************************************************/
void ino(BinaryTreeNode<int> * n,vector<int>&v)
{
    if(!n)
        return;
   
    ino(n->left,v);
    v.push_back(n->data);
    ino(n->right,v);
}
void preo(BinaryTreeNode<int> * n,vector<int>&v)
{
    if(!n)
        return;
    v.push_back(n->data);
    preo(n->left,v);
    preo(n->right,v);
}
void posto(BinaryTreeNode<int> * n,vector<int>&v)
{
    if(!n)
        return;
    
    posto(n->left,v);
    posto(n->right,v);
    v.push_back(n->data);
}

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<vector<int>> v;
    if(!root)
        return v;
    vector<int> in,pre,post;
    
    preo(root,pre);
    ino(root,in);
    posto(root,post);
    
    
    v.push_back(in);
    v.push_back(pre);
    v.push_back(post);
    return v;
}
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode < T > *left;
        BinaryTreeNode < T > *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
void solve(BinaryTreeNode < int > * root,int &mx)
{
    if(!root) return;
    solve(root->left,mx);
    solve(root->right,mx);
    if(root->left || root->right) root->data=0;
    if(!root->left && !root->right) root->data=mx;
    if(root->left) root->data+=root->left->data;
    if(root->right) root->data+=root->right->data;
    
}
void findMax(BinaryTreeNode < int > * root,int & mx)
{
    if(!root) return;
    mx=max(mx,root->data);
    findMax(root->left,mx);
    findMax(root->right,mx);
    return;
}
void changeTree(BinaryTreeNode < int > * root) {
    // Write your code here.
    int mx=0;
    findMax(root,mx);
    solve(root,mx);
    
    
    
    
}  
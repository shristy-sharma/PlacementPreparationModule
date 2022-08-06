
void help(BinaryTreeNode<int> *root,bool& f)
{
   if(root==NULL) return ;
    if(root->left)
    { if(root->left->data > root->data)
    {  f= false;
     return;
     }
    }
    if(root->right)
    {
        if(root->right->data < root->data)
        {
            f=false;
            return;
        }
            
    }
    help(root->left,f);
    help(root->right,f);
    return ;
}
bool validateBST(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL)
        return true;
    bool f=true;
    help(root,f);
    return f;
}
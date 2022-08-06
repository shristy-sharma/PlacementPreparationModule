#include <limits.h>
TreeNode<int>* search(vector<int>& pre,int &i,int bound)
{
    if(i==pre.size() || pre[i]> bound)
        return NULL;
    TreeNode<int> * root=new TreeNode<int>(pre[i]);
    i++;
   root->left=search(pre,i,root->data);
    root->right=search(pre,i,bound);
    
}
TreeNode<int>* preOrderTree(vector<int> &pre){
    // Write your code here.
    int i=0;
    TreeNode<int>* root;
    root= search(pre,i,INT_MAX);
    return root;
}
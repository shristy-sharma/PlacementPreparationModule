/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int dia(TreeNode<int> *root,int &res)
{
    if(!root)
        return 0;
    int l=dia(root->left,res);
    int r=dia(root->right,res);
    
    int temp=max(r,l)+1;
    int ans=max(temp,1+r+l);
    res=max(res,ans);
    return temp;
}

int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
    int res=0;
    dia(root,res);
    return res-1;
    
}

/************************************************************

    Following is the TreeNode class structure.

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

TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    // Write your code here.
    TreeNode<int> * prev=root;
    TreeNode<int> * curr=root;
    while(curr)
    {
        if(curr->left!=NULL)
        {
            prev=curr->left;
            
        
        while(prev->right)
        {
            prev=prev->right;
        }
        prev->right=curr->right;
        curr->right=curr->left;
        }
        curr=curr->right;
    }
    return root;
    
}
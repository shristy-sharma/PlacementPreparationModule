/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int deep(TreeNode<int> * node)
{
    if(node == nullptr) return -1;
    int l=deep(node->left);
    int r=deep(node->right);
    return 1+max(l,r);
}
int maxDepth(TreeNode<int> *root) {
    // Write your code here.
    int ans;
   ans=deep(root);
    return ans;
    
}
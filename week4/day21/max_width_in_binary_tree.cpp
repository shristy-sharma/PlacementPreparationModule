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
#include <queue>
int getMaxWidth(TreeNode<int> *root)
{
    // Write your code here.
    queue<TreeNode<int> *> q;
    if(!root) return 0;
    q.push(root);
    int mx=0;
    while(!q.empty())
    {
           int a=q.size();
         mx=max(mx,a);
        for(int i=0;i<a;i++)
        {  TreeNode<int> * node=q.front();
        q.pop();
        if(node->left) q.push(node->left);
        if(node->right) q.push(node->right);
        }
     
       
    }
    return mx;
}
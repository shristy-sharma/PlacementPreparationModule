/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include <queue>
#include <vector>
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
     vector<int> ans;
    if(!root) return ans;
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
   
    while(!q.empty())
    {
        BinaryTreeNode<int> * t=q.front();
        q.pop();
        ans.push_back(t->val);
        if(t->left) q.push(t->left);
        if(t->right) q.push(t->right);
        
    }
    return ans;
}
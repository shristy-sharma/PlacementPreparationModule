/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/
#include <bits/stdc++.h>
vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    map<int,vector<int>> m;
    queue<pair<TreeNode<int> *,int>> q;
    q.push({root,0});
    while(!q.empty())
    {
        auto it=q.front();
        TreeNode<int>* x=it.first;
        auto y=it.second;
        m[y].push_back(x->data);
         q.pop();
        if(x->left!=NULL)
            q.push({x->left,y-1});
        if(x->right!=NULL)
            q.push({x->right,y+1});
        
    }
    vector<int> ans;
    for(auto it:m)
    {
        for(auto i:it.second)
        {
           ans.push_back(i); 
        }
    }
    return ans;
 
    
   
}
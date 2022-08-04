/*************************************************************

    Following is the Binary Tree node structure

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

*************************************************************/
#include <queue>
#include <vector>
vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here!
    vector<int> ans;
    if(!root) return ans;
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    int j=1;
    
    while(!q.empty())
    {
        int a=q.size();
         vector<int> v;
        for(int i=0;i<a;i++)
        {
            BinaryTreeNode<int> * node=    q.front();
           
            q.pop();
            v.push_back(node->data);
            if(node->left)
            q.push(node->left);
            if(node->right)
            q.push(node->right);
            
        }
        if(j>0) {
            for(int i=0;i<v.size();i++)
                ans.push_back(v[i]);
            
          }
        else
            for(int i=v.size()-1;i>=0;i--)
                ans.push_back(v[i]);
        j=j*-1;
       
        
        
    }
    return ans;
}

/*************************************************************
 
    Following is the Binary Tree node structure.

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

vector<int> bottomView(BinaryTreeNode<int> * root){

    // Write your code here.
    vector<int> ans;
    queue<pair<BinaryTreeNode<int> *,int>> q;
    map<int,int> m;
    q.push({root,0});
    if(root==NULL)
        return ans;
    while(!q.empty())
    {
        auto it=q.front();
        q.pop();
        BinaryTreeNode<int> * node=it.first;
        int line=it.second;
        m[line]=node->data;
        if(node->left!=NULL )
            q.push({node->left,line-1});
        if(node->right!=NULL)
            q.push({node->right,line+1});
            
        
        
    }
    for(auto it:m)
    {
        ans.push_back(it.second);
    }
    return ans;
}

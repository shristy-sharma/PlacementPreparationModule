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
void left(TreeNode<int>* root,int level,vector<int> & ans)
{
    if(!root) return;
    
    if(level==ans.size())
        ans.push_back(root->data);
    left(root->left,level+1,ans);
    left(root->right,level+1,ans);
    
}
vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    int level=0;
   vector<int> ans;
    left(root,level,ans);
    return ans;
}
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
#include <map>
TreeNode<int> * buildBinaryTreet(vector<int> & inorder,int is,int ie,vector<int>& preorder,int ps,int pe,map<int,int>& m)
{
    if(is>ie || ps>pe) return NULL;
  
    TreeNode<int> * root=new TreeNode<int>(preorder[ps]);
    int inroot=m[root->data];
    int numleft=inroot-is;
    root->left=buildBinaryTreet(inorder,is,inroot-1,preorder,ps+1,ps+numleft,m);
    root->right=buildBinaryTreet(inorder,inroot+1,ie,preorder,ps+numleft+1,pe,m);
    
    return root;
    
}
TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	//    Write your code here
    map<int,int> m;
    for(int i=0;i<inorder.size();i++)
        m[inorder[i]]=i;
    
    TreeNode<int> * root= buildBinaryTreet(inorder,0,preorder.size()-1,preorder,0,inorder.size()-1,m);
    return root;
}
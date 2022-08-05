/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   
 ************************************************************/
#include <map>
TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& post,int ps,int pe,vector<int>& in,int is,int ie,map<int,int>&m)
{
    if(is>ie || ps>pe) return NULL;
    
    TreeNode<int>* root=new TreeNode<int>(post[pe]);
    int inroot=m[post[pe]];
    int numleft=inroot-is;
    root->left=getTreeFromPostorderAndInorder(post,ps,ps+numleft-1,in,is,inroot-1,m);
    root->right=getTreeFromPostorderAndInorder(post,ps+numleft,pe-1,in,inroot+1,ie,m);
    return root;
}
TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) 
{
	// Write your code here.
    map<int,int> m;
    for(int i=0;i<inOrder.size();i++)
        m[inOrder[i]]=i;
    TreeNode<int> * root=getTreeFromPostorderAndInorder(postOrder,0,postOrder.size()-1,inOrder,0,inOrder.size()-1,m);
    return root;
}

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

int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
	//    Write your code here
    if(root==NULL) return -1;
    if(root==NULL || root->data==x || root->data==y)
        return  root->data;
    
    int l=lowestCommonAncestor(root->left,x,y);
    int r=lowestCommonAncestor(root->right,x,y);
    if(l==-1) return r;
    else if(r==-1) return l;
    else 
        return root->data;
    
    
    
    
    
}
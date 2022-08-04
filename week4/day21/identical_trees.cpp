/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>

    class BinaryTreeNode {
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

***********************************************************/

   
bool solve(BinaryTreeNode<int>* p, BinaryTreeNode<int>* q){
        if(!p && q || p && !q)return false;
        
        if(!p && !q)return true;
        
        
        if(p->data!=q->data){
            return false;
        }        
        bool a=solve(p->left,q->left);
    bool b=solve(p->right,q->right);
        return  a&&b;
    }    
bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    return solve(root1,root2);      
}
/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/

int findCeil(BinaryTreeNode<int> *root, int x){
    // Write your code here.
    int prev=-1;
    while(root)
    {
        if(root->data == x){
            prev=root->data;
            return prev;
        }
        else if(root->data >x)
        {
            prev=root->data;
            root=root->left;
        }
        else 
            root=root->right;
    }
    return prev;
}
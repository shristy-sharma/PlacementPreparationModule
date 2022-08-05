/**********************************************************

    Following is the Binary Tree Node structure:

    template <typename T>
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
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };
***********************************************************/
void inorder(BinaryTreeNode<int> *root,vector<int>& v)
{
 if(!root)
     return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    // Write your code here
    vector<int> v;
    inorder(root,v);
    int i=0,j=v.size()-1;
    while(i<=j)
    {
        if(v[i]+v[j]==k) return true;
        else if(v[i]+v[j]<k) i++;
        else j--;
    }
    return false;
}
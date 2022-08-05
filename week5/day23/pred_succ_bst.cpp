/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

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

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/
void inorderp(BinaryTreeNode<int>* root,int & pre,int key)
{
    while(root!=NULL)
    { if(root->data<key)
    {
        pre=root->data;
        root=root->right;
    }
    else if(root->data>=key)
    {
        root=root->left;
    }
    }
}
void inorders(BinaryTreeNode<int>* root,int& suc,int key)
{
    while(root!=NULL)
    { if(root->data>key)
    {
        suc=root->data;
        root=root->left;
    }
    else if(root->data<=key)
    {
        root=root->right;
    }
    }
}
pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here.
    int pre=-1;
    int suc=-1;
    inorderp(root,pre,key);
    inorders(root,suc,key);
    pair<int,int> ans={pre,suc};
    return ans;
}

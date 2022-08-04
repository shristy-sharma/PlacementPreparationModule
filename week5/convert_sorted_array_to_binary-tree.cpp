/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
TreeNode<int>* search(vector<int> &arr,int s,int e)
{
    if(s>e) return NULL;
    int mid=(s+e)/2;
  TreeNode<int>* curr= new TreeNode<int>(arr[mid]);
    curr->left=search(arr,s,mid-1);
    curr->right=search(arr,mid+1,e);
    return curr;
    
}
TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    // Write your code here.
    if(n==0) return NULL;
    return search(arr,0,n-1);
}
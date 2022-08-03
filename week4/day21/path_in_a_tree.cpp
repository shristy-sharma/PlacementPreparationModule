/*   
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
			left = NULL;
			right = NULL;
		}

		~TreeNode()
		{
			if (left != NULL)
			{
		  		delete left;
			}
			if (right != NULL)
			{
			 	delete right;
			}
		}
	};
*/
bool path(TreeNode<int> * node,vector<int>& res,int x)
{
    if(!node) return false;
    res.push_back(node->data);
    if(node->data==x)
        return true;
   if( path(node->left,res,x )|| path(node->right,res,x) )
       return true;
    res.pop_back();
    return false;
    
    
    
}

vector<int> pathInATree(TreeNode<int> *root, int x)
{
    // Write your code here.
    vector<int> ans;
    if(!root) return ans;
    path(root,ans,x);
    return ans;
    
}

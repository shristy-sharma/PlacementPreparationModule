struct Node{
    Node* links[2];
    
    bool contains(int bit)
    {
        return (links[bit]!=NULL);
    }
    Node* get(int bit)
    {
        return links[bit];
    }
    void put(int bit,Node* node)
    {
        links[bit]=node;
    }
};
class Trie{
    private:
    Node* root;
    public:
    Trie(){
        root=new Node();
    }
    void insert(int num)
    {
        Node* node=root;
        for(int i=31;i>=0;i--)
        {
            int bit=(num>>i)&1;
            if(!node->contains(bit))
            { node->put(bit,new Node());
            }
             node=node->get(bit);
            
        }
    }
    int getMax(int num)
    {
        Node* node=root;
        int maxN=0;
        for(int i=31;i>=0;i--)
        {
            int bit=(num>>i)&1;
            if(node->contains(!bit))
            { maxN  = maxN |( 1<<i);
             node=node->get(!bit);
            }
            else node=node->get(bit);
            
            
        }
        return maxN;
    }
    
};
int maximumXor(vector<int> A)
{
    // Write your code here.   
    int n=A.size();
    Trie t;
    for(int i=0;i<n;i++)
        t.insert(A[i]);
    
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=max(ans,t.getMax(A[i]));
    }
    return ans;
}
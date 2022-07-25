vector<vector<int>> pwset(vector<int>v)
{
    //Write your code here
    vector<vector<int>> ans;
   
    int n=v.size();
    for(int i=0;i<(1<<n);i++)
    { vector<int> tmp;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
                tmp.push_back(v[j]);
                
        }
        ans.push_back(tmp);
    }
    return ans;
}
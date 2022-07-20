vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>> ans;
    for(int i=0;i<(1<<n);i++)
    {
        int sum=0;
        vector<int> tmp;
        for(int j=0;j<n;j++)
        {
         if(i&(1<<j))
         {
             tmp.push_back(arr[j]);
             sum+=arr[j];
         }
        }
        if(sum==k)
            ans.push_back(tmp);
    }
    return ans;
}
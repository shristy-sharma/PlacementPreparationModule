#include<bits/stdc++.h> 
void solve(int ind,vector<int> &ans, vector<vector<int>>& res,vector<int>& arr)
{
    res.push_back(ans);
    for(int i=ind;i<arr.size();i++)
    {
        if(i!=ind && arr[i]==arr[i-1]) continue;
        ans.push_back(arr[i]);
        solve(i+1,ans,res,arr);
        ans.pop_back();
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
   vector<int> ans;
    vector<vector<int>> res;
    sort(arr.begin(),arr.end());
    solve(0,ans,res,arr);
    return res;
}
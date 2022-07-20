#include <bits/stdc++.h>
void combine(int ind,vector<vector<int>> &res,vector<int> &ans,vector<int>& arr,int n,int target)
{
    if(target==0)
    {
        res.push_back(ans);
        return;
    }
    for(int i=ind;i<n;i++)
    {
        if(i!=ind && arr[i]==arr[i-1] ) continue;
        if(arr[i]>target) break;
        ans.push_back(arr[i]);
        combine(i+1,res,ans,arr,n,target-arr[i]);
        ans.pop_back();
        
    }
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	// Write your code here.
    vector<int> ans;
    vector<vector<int>> res;
    sort(arr.begin(),arr.end());
    combine(0,res,ans,arr,n,target);
    return res;
}

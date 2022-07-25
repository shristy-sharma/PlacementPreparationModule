#include <bits/stdc++.h>
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    priority_queue<pair<int,int>> maxh;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {   
      m[arr[i]]++;
      
    }
    for(auto x : m)
          maxh.push({x.second,x.first});
        
    vector<int> ans;
    
    while(k>0)
    {
        ans.push_back(maxh.top().second);
        maxh.pop();
        k=k-1;
        
    }
    sort(ans.begin(),ans.end());
    return ans;
    
}
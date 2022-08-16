#include <bits/stdc++.h>
vector<int> topologicalSort(vector<vector<int>> &edges, int n, int e)  {
    // Write your code here
    unordered_map<int,vector<int>> adj;
    for(int i=0;i<e;i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        
    }
    vector<int> indeg(n,0);
    for(auto i:adj)
    {
        for(auto it:i.second)
            indeg[it]++;
    }
    vector<int> ans;
    queue<int> q;
    for(int i=0;i<n;i++)
    {
        if(indeg[i]==0)
            q.push(i);
    }
    
    while(!q.empty())
    {
        int a=q.front();
        q.pop();
        ans.push_back(a);
        for(auto i:adj[a])
        {
            indeg[i]--;
            if(indeg[i]==0)
                q.push(i);
        }
        
    }
    
     return ans;   
}
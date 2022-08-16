#include <bits/stdc++.h>
bool bfs(int node,vector<int> v[],vector<int>& color)
{
    queue<int> q;
    q.push(node);
    color[node]=1;
    while(!q.empty())
    {
       int a=q.front();
        q.pop();
        for(auto it:v[a])
        {
            if(color[it]==-1)
            {
                color[it]=1-color[a];
                q.push(it);
                
            }
            else if(color[it]==color[a]) return false;
        }
    }
    return true;
}
bool isGraphBirpatite(vector<vector<int>> &edges) {
	// Write your code here.
    int n=edges[0].size();
    vector<int> adj[n];
        
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(edges[i][j] == 1)
           { adj[i].push_back(j);
            adj[j].push_back(i);
           }
           
       }
   }
    vector<int> color(edges[0].size(),-1);
    
    for(int i=0;i<edges[0].size();i++)
    {
        if(color[i]==-1)
        {
            if(bfs(i,adj,color)==false)
                return false;
        }
    }
        
    
    
}
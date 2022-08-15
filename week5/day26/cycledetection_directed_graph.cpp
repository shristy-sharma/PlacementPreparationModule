bool iscycle(int i,vector<int>& vis,vector<int>& dfsvis,vector<int> adj[])
{
    vis[i]=1;
    dfsvis[i]=1;
    for(auto it:adj[i])
    {
        if(!vis[it])
        {
            if(iscycle(it,vis,dfsvis,adj))
                
            return true;
        }
        else if( vis[it]==1 && dfsvis[it]==1)
            return true;
    }
    dfsvis[i]=0;
    return false;
        
}
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
    vector<int> adj[n+1];
    for(int i=0;i<edges.size();i++)
    {
        int u=edges[i].first;
        int v=edges[i].second;
        adj[u].push_back(v);
    }
    
    vector<int> vis(n+1,0);
    vector<int> dfsvis(n+1,0);
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            if(iscycle(i,vis,dfsvis,adj))
                return 1;
        }
    }
    return 0;
}
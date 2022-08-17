#include<bits/stdc++.h>
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // Write your code here.
    unordered_map<int,vector<pair<int,int>>> adj;
    for(int i=0;i<vec.size();i++)
    {
        int x=vec[i][0];
        int y=vec[i][1];
        int z=vec[i][2];
        adj[x].push_back({y,z});
        adj[y].push_back({x,z});
        
    }
    vector<int> dis(vertices,INT_MAX);
    dis[source]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,source});
    while(!pq.empty())
    {
        int node=pq.top().second;
        pq.pop();
        for(auto &it:adj[node])
        {
            if(it.second+dis[node]<dis[it.first])
            {
                dis[it.first]=it.second+dis[node];
                pq.push({dis[it.first],it.first});
            }
        }
          
    }
    return dis;
}

bool isPos(vector<vector<int>>& mt,vector<int>& color,int node,int col,int n)
{
    for(int i=0;i<n;i++)
    {
        if(i!=node && mt[i][node]==1 && color[i]==col) return false;
    }
    return true;
}
bool solve(int node,vector<int>& color,vector<vector<int>>& mt,int n,int m)
{
    if(node==n)
        return true;
    for(int i=1;i<=m;i++)
    {
        if(isPos(mt,color,node,i,n))
        {
            color[node]=i;
            if(solve(node+1,color,mt,n,m)) return true;
            color[node]=0;
        }
    }
    return false;
}

string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
    int n=mat.size();
    vector<int>color(n,0);
    
    if(solve(0,color,mat,n,m)) return "YES";
    return "NO";
}
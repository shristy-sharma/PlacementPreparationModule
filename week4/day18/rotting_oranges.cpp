#include <queue>
int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    // Write your code here. 
    int days=0,tot=0,cnt=0;
    if(grid.empty())
        return 0;
    queue<pair<int,int>> q;
    for(int i=0;i<grid.size();i++)
    {
        for(int j=0;j<grid[0].size();j++)
        {
            if(grid[i][j]!=0) tot++;
            if(grid[i][j]==2) q.push({i,j});
        }
    }
    
    
   int dx[4]={0,-1,1,0};
    int dy[4]={1,0,0,-1};
    
    while(!q.empty())
    { int k=q.size();
         cnt+=k;
        while(k--)
        {int x=q.front().first,y=q.front().second;
        q.pop();
            for(int i=0;i<4;i++)
            {
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(nx<0|| nx>=n || ny<0 || ny>=m || grid[nx][ny]!=1)
                    continue;
                grid[nx][ny]=2;
                q.push({nx,ny});
            }
        }
     if(!q.empty())  days++;
     
        
    }
    return tot==cnt?days:-1;
    
}
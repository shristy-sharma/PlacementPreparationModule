#include <bits/stdc++.h>
vector<int> dx={1,0,-1,0};
vector<int> dy= {0,-1,0,1};
void dfs(vector<vector<int>> &image,int newColor,int source, int x, int y, int r,int c)
{
    if(x<0 || y<0 || x>=r || y>=c)
        return;
    else if(image[x][y]!=source)
        return;
    image[x][y]=newColor;
        dfs(image,newColor,source,x+1,y,r,c);
        dfs(image,newColor,source,x,y-1,r,c);
        dfs(image,newColor,source,x-1,y,r,c);
        dfs(image,newColor,source,x,y+1,r,c);
    
}
vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    // Write your code here.
    
    if(newColor ==image[x][y])
        return image;
    int rows=image.size();
    int col=image[0].size();
    int source=image[x][y];
    dfs(image,newColor,source,x,y,rows,col);
    return image;
    
    
}
#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &mt)
{
	// Write your code here.
   int n=mt.size();
    int m=mt[0].size();
    bool row=false,col=false;
    for(int i=0;i<n;i++)
        if(mt[i][0]==0) col=true;
    for(int j=0;j<m;j++)
        if(mt[0][j]==0) row=true;
    for(int i=1;i<n;i++)
        for(int j=1;j<m;j++)
        {
            if(mt[i][j]==0)
            {     mt[i][0]=0;
             mt[0][j]=0;
            }
        }
    for(int i=1;i<n;i++)
    {
        if(mt[i][0]==0)
        {
            for(int j=1;j<m;j++)
                mt[i][j]=0;
        }
    }
     for(int j=1;j<m;j++)
    {
        if(mt[0][j]==0)
        {
            for(int i=1;i<n;i++)
                mt[i][j]=0;
        }
    }
    if(row)
    {
        for(int j=0;j<m;j++)
        {
            mt[0][j]=0;
        }
    }
    if(col)
    {
        for(int i=0;i<n;i++)
            mt[i][0]=0;
    }
}
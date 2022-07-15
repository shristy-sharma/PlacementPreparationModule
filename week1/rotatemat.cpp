#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mt, int n, int m)
{
    // Write your code here
    int iu=0,il=n-1,ju=0,jl=m-1;
    if(il==0 || jl==0) return;
    while(ju<jl && iu<il)
    {
        int tmp=mt[iu][iu];
        for(int j=ju+1;j<=jl;j++)
        {
            swap(tmp,mt[iu][j]);
        }
        for(int i=iu+1;i<=il;i++)
            swap(tmp,mt[i][jl]);
        for(int j=jl-1;j>=ju;j--)
            swap(tmp,mt[il][j]);
        for(int i=il-1;i>=iu;i--)
            swap(tmp,mt[i][ju]);
        iu++,il--;
        ju++,jl--;
        
        
    }
    

}

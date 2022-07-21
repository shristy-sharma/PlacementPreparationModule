bool isValid(int r,int col,int c,int m[9][9])
{
    for(int i=0;i<9;i++)
    {
     if(m[i][col]==c) return false;
        if(m[r][i]==c) return false;
        if(m[3*(r/3)+i/3][3*(col/3)+i%3]==c) return false;
    }
    return true;
}
bool isItSudoku(int m[9][9]) {
    // Write your code here.
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(m[i][j]==0)
            {
                for(int c=1;c<=9;c++)
                {
                    if(isValid(i,j,c,m))
                    {
                        m[i][j]=c;
                        if(isItSudoku(m))
                            return true;
                        else 
                            m[i][j]=0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}

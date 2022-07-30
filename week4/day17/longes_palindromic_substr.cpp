string longestPalinSubstring(string str)
{
    // Write your code here.
    int n=str.length();
    bool dp[n][n];
    int k;
    int len=0;
    for(int g=0;g<n;g++)
    {
        for(int i=0,j=g;j<n;i++,j++)
        {
            if(g==0) dp[i][j]=true;
                else if(g==1) {
                    if(str[i]==str[j])
                        dp[i][j]=true;
                    else dp[i][j]=false;
                }
                    else{
                        if(str[i]==str[j] && dp[i+1][j-1])
                            dp[i][j]=true;
                        else dp[i][j]=false;
                        
                    }
             if(dp[i][j] && len<(g+1))
             {    k=i;
                 len=g+1;
             }
        }
       
    }
    return str.substr(k,len);
}
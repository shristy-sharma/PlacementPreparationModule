#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &p, int n)
{
    //  Write your code here.
    int i,j;
    for(i=n-2;i>=0;i--)
    {
        if(p[i]<p[i+1])
        
            break;
        
    }
    if(i<0)
    {
        reverse(p.begin(),p.end());
    }
    else{
        for( j=n-1;j>i;j--)
        {
            if(p[j]>p[i]) break;
        }
        swap(p[j],p[i]);
        reverse(p.begin()+i+1,p.end());
        
        
    }
    return p;
}
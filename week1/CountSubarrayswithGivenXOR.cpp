#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    map<int,int> f;
    int xorr=0,c=0;
    for(auto i:arr)
    {
        xorr=xorr^i;
        if(xorr==x)
            c++;
        if(f.find(xorr^x)!=f.end())
            c+=f[xorr^x];
       
            f[xorr]+=1;
    }
    return c;
}
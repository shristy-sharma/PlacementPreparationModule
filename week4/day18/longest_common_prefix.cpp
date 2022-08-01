
#include <stack>
#include<bits/stdc++.h>
string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    
    stack<char> s;
    int j=0;
    for(int i=arr[0].size()-1;i>=0;i--)
    {
        s.push(arr[0][i]);
    }
    string ans="";
    while(j>=0)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i][j]!=s.top())
            {
                j=-1;
                break;
            }
        }
            if(j==-1)
                continue;
            j++;
            ans+=s.top();
            s.pop();
        
    }
    return ans;
}



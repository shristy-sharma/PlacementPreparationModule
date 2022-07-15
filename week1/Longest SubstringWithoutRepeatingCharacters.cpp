#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    //Write your code here
    int i=0,j=0;
    if(s.length()==0)
        return 0;
    unordered_map<char,int> m;
    int maxi=INT_MIN;
    while(   j<s.length()    )
    {
        m[s[j]]++;
        if(m.size()==j-i+1)
        {
            maxi=max(maxi,j-i+1);
            j++;
        }
        else if(m.size()<j-i+1)
        {
            while(m.size()<j-i+1)
            {
                m[s[i]]--;
                if( m[s[i]]==0 )
                    m.erase(s[i]);
                i++;
            }
            
            j++;
            
            
        }
       else  if(m.size()>j-i+1) j++;
    }
    return maxi;
}
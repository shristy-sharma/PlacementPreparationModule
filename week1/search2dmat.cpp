#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int t) {
    // Write your code here.
   int l=0,h=(m*n)-1;
   
    
    while(l<=h)
    { int mid=l+(h-l)/2;
    int a=mat[mid/n][mid%n];
        if(a==t)
            return true;
        else if(a<t)
            l=mid+1;
        else 
            h=mid-1;
            
    }
    return false;
    
}
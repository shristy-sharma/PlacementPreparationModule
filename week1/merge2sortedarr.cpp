#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int n, int m) {
	// Write your code here.
    int i=0,j=0;
    vector<int>a ;
    
    while(i<n && j<m)
    {
        if(arr1[i]<=arr2[j])
        {a.push_back(arr1[i]);
         i++;}
        else if( arr1[i]>arr2[j])
        {a.push_back(arr2[j]);
        j++;}  
       
       
        
        
    }
    if(i<n)
    {
        while(i<n)
        {  a.push_back(arr1[i]);
         i++;}
    }
    if(j<m)
        while(j<m)
        { a.push_back(arr2[j]);
         j++;}
    return a;
    
    
}
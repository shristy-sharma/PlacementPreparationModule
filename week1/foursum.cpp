#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {    sort(arr.begin(),arr.end());  
                                                    
                 for(int i=0;i<n-3;i++)    {        
                     for(int j=i+1;j<n-2;j++)    
                     {       int l=j+1;     
                     int h=n-1;           
                      int twosum=target-(arr[i]+arr[j]);                                           while(l<h)           
                      {     if(arr[l]+arr[h]<twosum)                                                  l++;    
                       else if(arr[l]+arr[h]>twosum)   h--;                                        else    return "Yes";            
                      } 
                     }
                 }  
            return "No"; }  
    
    
    
    
    
    


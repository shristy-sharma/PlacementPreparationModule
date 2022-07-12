#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<vector<int>> ans;
   
  for(int i=0;i<arr.size()-1;i++)
      for(int j=i+1;j<arr.size();j++)
      {
          if(arr[i]+arr[j]==s)
          {  vector<int> a;
              a.push_back(min(arr[i],arr[j]));
           a.push_back(max(arr[j],arr[i]));
           ans.push_back(a);
          }
          
              
      }
    sort(ans.begin(),ans.end());
    return ans;
}
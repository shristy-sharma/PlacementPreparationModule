
#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
   vector<vector<int>> res;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size()-2;i++)
    {
        if(i==0 || (i>0 && arr[i]!=arr[i-1]))
        {
            int l=i+1,h=arr.size()-1,sum=K-arr[i];
            while(l<h )
            {
                if(arr[l]+arr[h]==sum)
                {
                    vector<int> tmp;
                    tmp.push_back(arr[i]);
                    tmp.push_back(arr[l]);
                    tmp.push_back(arr[h]);
                    res.push_back(tmp);
                    
                    while(l<h && arr[l]==arr[l+1])
                        l++;
                    while(l<h && arr[h]==arr[h-1])
                        h--;
                    l++;
                    h--;
                }
                else if(arr[l]+arr[h]<sum)
                    l++;
                else 
                    h--;
                
            }
            
            
            
        }
    }
    return res;
    
    
    
    
    
}
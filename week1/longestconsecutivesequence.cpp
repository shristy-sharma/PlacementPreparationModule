#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int N) {
    // Write your code here.
  
        int len = 0, res = INT_MIN;
        if(N == 0)
            return 0;
        unordered_set<int>s;
        for(int i = 0; i < N; i++)
           s.insert(arr[i]);
        for(auto i : arr)
        {
            if(s.find(i - 1) == s.end())
            {
                int k = i;
                int len = 1;
                while(s.find(k + 1) != s.end())
                {
                    k++;
                    len++;
                }
                // cout<<k<<"len-- "<<i<<"    ";   
                res = max(res, len);
            }
        }
        return res ;

}
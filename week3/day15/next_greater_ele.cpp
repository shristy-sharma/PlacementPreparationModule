


#include<stack>
#include<algorithm>
#include <math.h>
vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here
    vector<int> ans;
    stack<int> s;
   for(int i=n-1;i>=0;i--)
   {
       if(s.size()==0)
           ans.push_back(-1);
       else if(s.size()>0 && arr[i]<s.top())
           ans.push_back(s.top());
       else if(s.size()>0 && arr[i]>=s.top())
       {
           while(s.size()>0 && arr[i]>=s.top())
           {
               s.pop();
           }
           if(s.size()==0)
               ans.push_back(-1);
           else
               ans.push_back(s.top());
       }
      s.push(arr[i]);
       
   
       
   }
    reverse(ans.begin(),ans.end());
    return ans;
}
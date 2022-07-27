#include <stack>
#include <algorithm>
#include <math.h>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int> s;
    vector<int> ans;
    for(int i=n-1;i>=0;i--)
    {
        if(s.empty())
            ans.push_back(-1);
        else if(!s.empty() && s.top()<arr[i])
            ans.push_back(s.top());
        else if(!s.empty() && s.top()>=arr[i])
        {
            while(!s.empty() && s.top()>=arr[i])
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
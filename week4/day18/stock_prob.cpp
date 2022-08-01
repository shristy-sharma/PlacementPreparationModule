#include <stack>
    vector<int> findSpans(vector<int> &price) {
    // Write your code here.
    vector<int> v;
    stack<pair<int,int>> s;
    
    for(int i=0;i<price.size();i++)
    {
        if(s.empty())  v.push_back(-1);
        else if(!s.empty() && s.top().first>price[i])
        {
            v.push_back(s.top().second);
        }
        else if(!s.empty() && s.top().first<=price[i])
        {
            while(!s.empty() && s.top().first<=price[i])
                s.pop();
            if(s.empty() )
                v.push_back(-1);
            else
                v.push_back(s.top().second);
        }
        s.push({price[i],i});
            
    }
    vector<int> ans;
    for(int i=0;i<price.size();i++)
    {
        ans.push_back(i-v[i]);
    }
    return ans;
}
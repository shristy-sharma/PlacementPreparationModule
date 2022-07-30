#include <deque>
vector<int> slidingWindowMaximum(vector<int> &nums, int &k)
{
    //    Write your code here.
    int n=nums.size();
   deque<int> d;
    int i=0,j=0;
    vector<int> res;
    while(j<n)
    {
        while(!d.empty() && d.back()<nums[j] )
             d.pop_back();
            if(j-i+1<k)
            j++;
        else if(j-i+1==k)
        {
            res.push_back(d.front());
            if(d.front()==nums[i]) d.pop_front();
            i++; j++;
            
        }
        
    }
    return res;
}
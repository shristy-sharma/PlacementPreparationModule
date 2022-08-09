#include <unordered_map>
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    // Write your code here
    unordered_map<int,int> m;
   
   int i=0,j=0;
    vector<int> ans;
    while(j<arr.size())
    {
        m[arr[j]]++;
        if(k==(j-i+1))
        {
            ans.push_back(m.size());
            m[arr[i]]--;
            
            if(m[arr[i]]==0)
            {
                m.erase(arr[i]);
            }
            i++;
            j++;
        }
        else if((j-i+1)<k)
            j++;
        
            
    }
    return ans;
	
}

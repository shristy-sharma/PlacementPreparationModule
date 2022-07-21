bool isPal(string s,int start,int end)
{
    while(start<=end)
    {
        if(s[start++]!=s[end--])
            return false;
    }
    return true;
}

void fun(int ind,string s,vector<vector<string>>& res,vector<string>& path)
{
    if(ind==s.length())
    {
        res.push_back(path);
        return;
    }
    for(int i=ind;i<s.length();i++)
    {
        if(isPal(s,ind,i))
        {
            path.push_back(s.substr(ind,i-ind+1));
            fun(i+1,s,res,path);
            path.pop_back();
            
        }
    }
}
vector<vector<string>> partition(string &s) 
{
    // Write your code here.
    vector<string> path;
    vector<vector<string>> res;
    fun(0,s,res,path);
    return res;
    
}
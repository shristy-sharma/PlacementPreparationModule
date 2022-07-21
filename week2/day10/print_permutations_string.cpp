void permute(string& st,int s,int e,vector<string>& ans)
{
    if(s==e)
    {
        ans.push_back(st);
        return;
    }
    for(int i=s;i<=e;i++)
    {
        swap(st[s],st[i]);
        permute(st,s+1,e,ans);
        swap(st[s],st[i]);
    }
}
vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string> ans;
    string str;
    int n=s.length();
    permute(s,0,n-1,ans);
    return ans;
    
}
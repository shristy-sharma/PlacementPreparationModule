bool isValidParenthesis(string e)
{
    // Write your code here.
    stack<char> s;
    for(int i=0;i<e.length();i++)
    {
        if(e[i]=='(' || e[i]=='{' || e[i]=='[')
            s.push(e[i]);
        else if(s.empty())
            return false;
        else if((s.top()=='{' && e[i]=='}') || (s.top()=='(' && e[i]==')') || (s.top()=='[' && e[i]==']'))
               s.pop();
        
        else s.push(e[i]);
           
    }
    if(s.size()>0)
        return false;
    else
    return true;
}
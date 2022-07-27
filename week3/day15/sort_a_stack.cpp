void insert(stack<int> &s, int n)
{
    if(s.size()==0 || s.top()<=n)
    {
        s.push(n);
        return;
    }
    int v=s.top();
    s.pop();
    insert(s,n);
    s.push(v);
   
}

void sortStack(stack<int> &s)
{
	// Write your code here
    if(s.size()==1)
    {
        return;
    }
    int n=s.top();
    s.pop();
    sortStack(s);
    insert(s,n);
   
}
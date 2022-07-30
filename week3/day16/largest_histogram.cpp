#include <stack>
#include <limits.h>
int largestRectangle(vector < int > & h) {
   // Write your code here.
     int n=h.size();
     vector<int> l,r;
     stack<pair<int,int>> s;
    int ps=n;
     for(int i=n-1;i>=0;i--)
     {
         if(s.empty())
         {
              r.push_back(ps);
         }
         else if(!s.empty() && s.top().first<h[i])
             r.push_back(s.top().second);
         else if(!s.empty() && s.top().first>=h[i])
         {
             while(!s.empty() && s.top().first>=h[i])
                 s.pop();
             if(s.size()==0)
                 r.push_back(ps);
             else 
                 r.push_back(s.top().second);
         }
         s.push({h[i],i});
         
     }
     reverse(r.begin(),r.end());
     
             
     
stack<pair<int,int>> t;
    int pps=-1;
for(int i=0;i<n;i++)
{
    if(t.empty())
        l.push_back(pps);
    else if(!t.empty() && t.top().first<h[i])
         l.push_back(t.top().second);
         else if(!t.empty() && t.top().first>=h[i])
         {
             while(!t.empty() && t.top().first>=h[i])
                 t.pop();
             if(t.size()==0)
                 l.push_back(pps);
             else 
                 l.push_back(t.top().second);
         }
         t.push({h[i],i});
         
        
}
vector<int> a;
int mx=INT_MIN;
for(int i=0;i<n;i++)
{
    a.push_back((r[i]-l[i])-1);

    
}
    for(int i=0;i<h.size();i++)
    {
        mx =  max(mx,(h[i]*a[i]));
    }
      
    return mx;
     
     
     
 }
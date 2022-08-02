#define ll long long int
#include <vector>

int compareVersions(string a, string b) 
{
    // Write your code here
    ll as=a.size();
    ll bs=b.size();
    ll num=0;
    vector<ll> aa,bb;
    
    for(int i=0;i<=as;i++)
    {
        if(a[i]=='.' || i==as)
        {
            aa.push_back(num);
            num=0;
        }
        else
            num= num*10 +(a[i]-'0');
    }
    for(int j=0;j<=bs;j++)
    {
        if(b[j]=='.' || j==bs)
        {
           bb.push_back(num);
            num=0;
        }
        else
            num= num*10+(b[j]-'0');
        
    }
    ll temp=max(aa.size(),bb.size());
    ll va,vb;
    for(int i=0;i<temp;i++)
    {
     if(i>=aa.size())
     {   va=0;}
        else
            va=aa[i];
        if(i>=bb.size()) vb=0;
        else  vb=bb[i];
        if(va>vb)
            return 1;
        else if( va<vb) return -1;
        
    }
    return 0;
}
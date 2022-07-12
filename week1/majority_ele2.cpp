#include <bits/stdc++.h> 
bool greaterf(vector<int>& a,int v)
{
    int f=0;
    for(int i=0;i<a.size();i++)
    {
       if(a[i]==v)
           f++;
    }
    int n=a.size();
    return f>n/3;
}
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int val1=arr[0];
    int c1=1;
    int val2=arr[0];
    int c2=0;
    
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]==val1)
        {
            c1++;
        }
        else if(arr[i]==val2)
        {
            c2++;
        }
        else
        {
            if(c1==0)
            {
                val1=arr[i];
                c1=1;
            }
            else if(c2==0)
            {
                val2=arr[i];
                c2=1;
            }
            else
            {
                c1--;
                c2--;
            }
           
        }
       
    }
     vector<int> ans;
        if(greaterf(arr,val1)==true)
            ans.push_back(val1);
        if(val1!=val2 && greaterf(arr,val2)==true)
            ans.push_back(val2);
    return ans;

}
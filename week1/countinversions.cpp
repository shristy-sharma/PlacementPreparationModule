#include <bits/stdc++.h> 
long long int count1=0;
long long int* mergearr(long long int* left,long long int* right,long long int n,long long int m)
{
    long long int i=0,j=0;
    long long int* ans=new long long int[n+m+1];
    int k=0;
    while(i<n && j<m)
    {
        if(left[i]<=right[j])
            ans[k++]=left[i++];
        else
        {
            ans[k++]=right[j++];
            count1 += n-i;
        }
    }
    while(i<n)
    {
        ans[k++]=left[i++];
    }
    while(j<m)
        ans[k++]=right[j++];
    return ans;
}
long long int* mergesort(long long *arr,long long int l,long long int h)
{
    if(l==h)
    {
        long long int* ans=new long long int[1];
        ans[0]=arr[l];
        return ans;
    }
    long long mid=l+(h-l)/2;
    long long int* left= mergesort(arr,l,mid);
    long long int* right=mergesort(arr,mid+1,h);
    return mergearr(left,right,mid-l+1,h-mid);
    
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    
   mergesort(arr,0,n-1);
    return count1;
}
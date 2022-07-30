#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
   vector<long> a(n),b(n);
    a[0]=arr[0];
    for(int i=1;i<n;i++)
        a[i]=max(a[i-1],arr[i]);
    b[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
        b[i]=max(b[i+1],arr[i]);
    long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=min(a[i],b[i])-arr[i];
    }
    return sum;
}
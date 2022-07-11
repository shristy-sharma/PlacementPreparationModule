#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    
    int ind=0;
    int count=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[ind])
            count++;
        else 
            count--;
        if(count==0)
        {
            ind=i;
            count=1;
            
        }
    }
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[ind])
        {f++;
            
        }
    }
      if(f>n/2)
          return arr[ind];
    else return -1;
    
}
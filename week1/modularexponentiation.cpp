#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
   long  res=1;
   long xx=x;
    while(n>0)
    {
        if(n&1 !=0)
        {res=(res%m * xx%m)%m;
         n=n-1;
        }
        else 
        {xx=(xx%m*xx%m)%m;
        n=n>>1;}
        
    }
return (int)(res);
}
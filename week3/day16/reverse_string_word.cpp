string reverseString(string str)
{
    // Write your code here.
   string res;
    int i=0,j;
    int n=str.length();
     while(i<n)
     {
         while(i<n && str[i]==' ')
             i++;
         if(i>=n) break;
         j=i+1;
         while(j<n && str[j]!=' ') j++;
         string w=str.substr(i,j-i);
         if(res.length()==0)  res=w;
         else
             res= w+' '+res;
           i=j+1;
     }

    return res;
}
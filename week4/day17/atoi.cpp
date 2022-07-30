int atoi(string str) {
    // Write your code here.
    int sign=1,i=0;
    if(str[0]=='-')
    {
       sign=-1; 
        i++;
    }
    int n=str.length();
    int ans=0;
    for(int j=i;j<n;j++)
    {
        if(str[j]-'0'>=0 && str[j]-'0'<=9)
            ans=ans*10+str[j]-'0';
    }
    return ans*sign;
}
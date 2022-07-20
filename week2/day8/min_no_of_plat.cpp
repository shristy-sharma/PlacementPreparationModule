int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    int plat=1,result=1;
    int i=1,j=0;
    while(i<n && j<n)
    {
        if(at[i]<dt[j])
        {
            plat++;
            i++;
        }
        else if(at[i]>dt[j])
        {
            plat--;
            j++;
        }
        if(result<plat)
            result=plat;
        
    }
    return result;
}
bool canStud(vector<int> time,int n,int m,int mid)
{
    int allot=1,ti=0;
    for(int i=0;i<m;i++)
    {
        if(time[i]>mid) return false;
        if(ti+time[i]>mid)
        {allot++;
         ti=time[i];
        }
        else
            ti+=time[i];
    }
    if(allot>n)
        return false;
    return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
    int res;
    int mn=INT_MAX;
    for(int i=0;i<time.size();i++)
        mn=min(mn,time[i]);
    int sum=0;
    for(int i=0;i<time.size();i++)
        sum+=time[i];
    int lo=mn,h=sum;
    while(lo<=h)
    {
        int mid=lo+(h-lo)/2;
        if(canStud(time,n,m,mid))
        {
            res=mid;
            h=mid-1;
        }
        else
          
          lo=mid+1;
        
        
    }
     return res;   
}
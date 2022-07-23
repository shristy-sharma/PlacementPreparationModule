bool canPlace(vector<int> &pos,int n,int c,int m)
{
    int co_ord=pos[0],cnt=1;
    for(int i=1;i<n;i++)
    {
        if(pos[i]-co_ord>=m)
        {
            co_ord=pos[i]; cnt++;
        }
        if(cnt==c)
            return true;
    }
    return false;
}
int chessTournament(vector<int> positions , int n ,  int c){
	// Write your code here
    sort(positions.begin(),positions.end());
    int l=1,h=positions[n-1]-positions[0];
    int mid;
    int res;
    while(l<=h)
    {
         mid=l+(h-l)/2;
        if(canPlace(positions,n,c,mid))
        {
            res=mid;
            l=mid+1;
        }
        else{
            h=mid-1;
        }
        
    }
    return res;
}
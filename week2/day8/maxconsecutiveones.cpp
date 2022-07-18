int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int i=0,j=0,count=k;
    int maxLen=0;
    while(j<n)
    {
        if(arr[j]==0 && k>=0) count--;
        
        if(count>=0) maxLen=max(maxLen,j-i+1);
        
        while(count<0 && i<n)
        {
            if(arr[i++]==0)
                count++;
        }
        j++;
    }
    return maxLen;
    
}

int uniqueElement(vector<int> arr, int n)
{
	// Write your code here
    int xr=0;
    for(int i=0;i<n;i++)
        xr=xr^arr[i];
    return xr;
}

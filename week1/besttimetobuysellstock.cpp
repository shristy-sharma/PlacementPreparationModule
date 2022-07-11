#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
  int minsofar=prices[0];
    int maxprofit=0;
    for(int i=0;i<prices.size();i++)
    {
        minsofar=min(minsofar,prices[i]);
        int profit=(prices[i]-minsofar);
        maxprofit=max(maxprofit,profit);
    }
    return maxprofit;
}
#include<algorithm>
#include<bits/stdc++.h>
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	// Write your code here.
priority_queue<int> help;
    vector<int> ans;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            help.push(a[i]+b[j]);
        }
    for(int i=0;i<k;i++)
    {
        ans.push_back(help.top());
        help.pop();
    }
    return ans;
}
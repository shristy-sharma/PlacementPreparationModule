#include <unordered_map>
bool areAnagram(string &str1, string &str2){
    // Write your code here.
    unordered_map<char,int> mp;
  int n=str1.length(),m=str2.length();
    if(m!=n) return false;
    for(int i=0;i<str1.length();i++)
        mp[str1[i]]++;
    for(int i=0;i<str2.length();i++)
    {
        if(mp[str2[i]]==0)
            return false;
    }
    return true;
    
}
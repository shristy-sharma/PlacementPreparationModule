#include <set>
int distinctSubstring(string &word) {
    //  Write your code here.
    
    set<string> s;
    string str;
    for(int i=0;i<word.length();i++)
    {
        str="";
        for(int j=i;j<word.length();j++)
        {
            str+=word[j];
            s.insert(str);
        }
    }    
    int n=s.size();
    return n;
    
    
}

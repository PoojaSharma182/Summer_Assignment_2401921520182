#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>last(256,-1);
        int maxlength=0;
        int i=0;
        
        for(int j=0;j<s.size();j++){
            if(last[s[j]]>=i){
                i=last[s[j]]+1;
            }
               last[s[j]]=j;
               maxlength=max(maxlength,j-i+1);
        }
        return maxlength;
    
        
    }
};
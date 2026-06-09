#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
bool isfreqsame(int freq1[],int freq2[]){
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}
    vector<int> findAnagrams(string s, string p) {
        
        int n=p.size();
        int m=s.size();
        vector<int>ans;
        if(n>m){
            return ans;
        }
        int freq1[26]={0};
        int freq2[26]={0};
        for(char ch:p){
            freq1[ch-'a']++;
        }
        for(int i=0;i<n;i++){
            freq2[s[i]-'a']++;
        }
        if(isfreqsame(freq1,freq2)){
            ans.push_back(0);
        }
        for(int i=n;i<m;i++){
            freq2[s[i]-'a']++;
            freq2[s[i-n]-'a']--;
            if(isfreqsame(freq1,freq2)){
                ans.push_back(i-n+1);
            }
        }
        return ans;
    }
};
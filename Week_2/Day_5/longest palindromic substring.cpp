#include<iostream>
#include<string>
using namespace std;
class Solution {
public:

 void expand(int left,int right,string &s,string &ans){

    int n=s.size();
    while(left>=0 && right<n && s[left]==s[right]){
        if(right-left+1 > ans.size()){
            ans=s.substr(left,right-left+1);
        }
            left--;
            right++;
        }   
 
 }
    string longestPalindrome(string s) {
        string ans="";
        int n=s.size();
        for(int i=0;i<n;i++){
            expand(i,i,s,ans);
            expand(i,i+1,s,ans);
        }       
           return ans; 
    }
};
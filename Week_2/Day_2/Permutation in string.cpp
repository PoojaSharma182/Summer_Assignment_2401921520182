#include<iostream>
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
bool checkInclusion(string s1,string s2){
    int n=s1.size();
    int m=s2.size();
    int freq1[26]={0};
    int freq2[26]={0};
        if(n>m){
           return false;
        }
         for(char ch:s1){
            freq1[ch-'a']++;
        }
        for(int i=0;i<n;i++){
            freq2[s2[i]-'a']++;
        }
        if(isfreqsame(freq1,freq2)){
            return true;
        }
        for(int i=n;i<m;i++){
            freq2[s2[i]-'a']++;
            freq2[s2[i-n]-'a']--;
            if(isfreqsame(freq1,freq2)){
               return true;

            }
        }
        return false;
    }
};
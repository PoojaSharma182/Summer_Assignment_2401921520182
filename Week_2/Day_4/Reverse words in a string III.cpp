
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int start=0;
        
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                int left=start;
                int right=i-1;
            while(left<right){
                swap(s[left],s[right]);
                left++;
                right--;

            }
            start=i+1;
            }
        }
        int left=start;
        int right=n-1;
         while(left<right){
                swap(s[left],s[right]);
                left++;
                right--;

            }

        return s;
    }
};
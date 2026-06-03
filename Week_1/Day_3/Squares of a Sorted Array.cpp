#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int i=0;
        int j=nums.size()-1;
        int pos=nums.size()-1;
        while(i<=j){
            if(abs(nums[i])<=abs(nums[j])){
                ans[pos]=nums[j]*nums[j];
                j--;pos--;

            }else{
                ans[pos]=nums[i]*nums[i];
                i++;pos--;

            }
            
        }
     return ans;
    }
};
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int windowsum=0;
        int maxsum=0;
        for(int i=0;i<k;i++){
        windowsum=windowsum+nums[ i];
        }
        maxsum=windowsum;  
         for(int i=k;i<nums.size();i++){
             windowsum=windowsum-nums[i-k]+nums[i];
            
            maxsum=max(maxsum,windowsum);
        }
        return(double)maxsum/k;
        
    }
};
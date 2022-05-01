/*  https://leetcode.com/problems/maximum-subarray/

Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.  */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxi = INT_MIN;
        int sum = 0;
        
        for(auto it : nums)
        {
            sum += it;
            
            maxi = max(sum, maxi);
            
            if(sum < 0)
            {
                sum = 0;
            }
        }
        return maxi;
    }
};

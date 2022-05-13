/* https://leetcode.com/problems/4sum/
Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order. */

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> res;
        
        if(nums.empty())
        {
            return res;
        }
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                int target_2 = target - (nums[j] + nums[i]);
                int left = j + 1;
                int right = n-1;
                
                while(left < right)
                {
                    int two_sum = nums[left] + nums[right];
                    if(target_2 > two_sum)
                    {
                        left++;
                    }
                    else if(target_2 < two_sum)
                    {
                        right--;
                    }
                    else
                    {
                        vector<int> v(4,0);
                        v[0] = nums[i];
                        v[1] = nums[j];
                        v[2] = nums[left];
                        v[3] = nums[right];
                        
                        res.push_back(v);
                        while(left < right && nums[left] == v[2])
                    {
                        ++left;
                    }
                    while(left < right && nums[right] == v[3])
                    {
                        --right;
                    }
                    }
                    
                    
                }
                while (j+1 < n && nums[j+1] == nums[j]) 
                {
                    ++j;
                }
            }
            
            while(i+1 < n && nums[i+1] == nums[i])
            {
                ++i;
            }
            
        }
        return res;
    }
};

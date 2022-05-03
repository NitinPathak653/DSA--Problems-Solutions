/* https://leetcode.com/problems/merge-sorted-array/
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, 
representing the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.
Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]   */

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
         if(n==0)
        {
            return;
        }
        
        if(m==0)
        {
            for(int i=0; i<n; i++)
            {
                nums1[i] = nums2[i];
            }
        }
        
        for(int i = 0; i < n; i++)
        {
            nums1[m+i] = nums2[i];
        }
        
        sort(nums1.begin(), nums1.end());
        
    }
};

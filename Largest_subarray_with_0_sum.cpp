/* https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1#
Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0. */


class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int> ump;
        int maxi = 0;
        int sum = 0;
        
        for(int i =0; i<n; i++)
        {
            sum += A[i];
            
            if(sum==0)
            {
                maxi = i+1;
            }
            else
            {
                if(ump.find(sum) != ump.end())
                {
                    maxi = max(maxi, i - ump[sum]);
                }
                else
                {
                    ump[sum] = i;
                }
            }
        }
        return maxi;
    }
};

/* https://leetcode.com/problems/merge-intervals/
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, 
and return an array of the non-overlapping intervals that cover all the intervals in the input. 
Example 1:
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6]. */

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> mergeInterval;
        
        if(intervals.size() == 0)
        {
            return mergeInterval;
        }
        
        sort(intervals.begin(), intervals.end());
        
        vector<int> tempInterval = intervals[0];
        
        for(auto it : intervals)
        {
            if(it[0] <= tempInterval[1])
            {
                tempInterval[1] = max(it[1], tempInterval[1]);
            }
            else
            {
                mergeInterval.push_back(tempInterval);
                tempInterval = it;
            }
        }
        
        mergeInterval.push_back(tempInterval);
        return mergeInterval;
        
        
    }
};

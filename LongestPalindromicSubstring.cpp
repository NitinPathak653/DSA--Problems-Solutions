/* https://leetcode.com/problems/longest-palindromic-substring/
Given a string s, return the longest palindromic substring in s. */

// Brute Force Approach
class Solution {
public:
    string longestPalindrome(string s) {
        vector<string> store;
        string ans;
        int len = 0;
        
        for(int i=0; i<s.size(); i++)
        {
            string sh = "";
            for(int j=i; j<s.size(); j++)
            {
                sh = sh + s[j];
                store.push_back(sh);
            }
        }
        
        for(auto &it : store)
        {
            int s = 0;
            int e = it.size()-1;
            bool flag = true;
            
            while(s<=e)
            {
                if(it[s] != it[e])
                {
                    flag = false;
                    break;
                }
                s++;
                e--;
            }
            if(flag)
            {
                if(it.size() > len)
                {
                    len = it.size();
                    ans = it;
                }
            }
        }
        return ans;
    }
};

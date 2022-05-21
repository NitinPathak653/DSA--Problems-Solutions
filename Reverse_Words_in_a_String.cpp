/* https://leetcode.com/problems/reverse-words-in-a-string/
Given an input string s, reverse the order of the words.  */

class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        stack<string> st;
        
        for(int i=0; i<s.size(); i++)
        {
            string sh = "";
            while(i<s.size() && s[i] == ' ' ) 
                i++;
            
            while(s[i] != ' ' && i<s.size())
            {
                sh = sh + s[i];
                i++;
            }
                
            if(sh != "")
            {
                 st.push(sh);
            }
           
        }
        
        while(!st.empty())
        {
            if(st.size() == 1)
            {
                ans = ans + st.top();
                st.pop();
            }
            else
            {
                ans = ans + st.top();
                st.pop();
                ans = ans + ' ';
            }
        }
        return ans;
    }
};

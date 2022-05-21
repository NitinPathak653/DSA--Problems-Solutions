/* https://leetcode.com/problems/roman-to-integer/
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

*/

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == 'I' && s[i+1] == 'V')
            {
                sum += 4;
                i++;
                continue;
            }
            else if(s[i] == 'I' && i<s.size()-1 && s[i+1] == 'X')
            {
                sum += 9;
                i++;
                continue;
            }
            else if(s[i] == 'X' && i<s.size()-1 && s[i+1] == 'L')
            {
                sum += 40;
                i++;
                continue;
            }
            else if(s[i] == 'X' && i<s.size()-1 && s[i+1] == 'C')
            {
                sum += 90;
                i++;
                continue;
            }
            else if(s[i] == 'C' && i<s.size()-1 && s[i+1] == 'D')
            {
                sum += 400;
                i++;
                continue;
            }
            else if(s[i] == 'C' && i<s.size()-1 && s[i+1] == 'M')
            {
                sum += 900;
                i++;
                continue;
            }
            else if(s[i] == 'I')
            {
                sum += 1;
                continue;
            }
            else if(s[i] == 'V')
            {
                sum += 5;
                continue;
            }
            else if(s[i] == 'X')
            {
                sum += 10;
                continue;
            }
            else if(s[i] == 'L')
            {
                sum += 50;
                continue;
            }
            else if(s[i] == 'C')
            {
                sum += 100;
                continue;
            }
            else if(s[i] == 'D')
            {
                sum += 500;
                continue;
            }
            else if(s[i] == 'M')
            {
                sum += 1000;
                continue;
            }
        }
        return sum;
    }
};

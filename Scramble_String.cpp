// https://leetcode.com/problems/scramble-string/

class Solution {
public:
    unordered_map<string,bool>mpp;
    bool isScramble(string a, string b) {
        if(a.length() != b.length())
        {
            return false;
        }
        if(a.compare(b)==0)
        {
            return true;
        }
        if(a.length()<=1)
        {
            return false;
        }
        
        string key = a + " " + b;
        if(mpp.find(key) != mpp.end())
        {
            return mpp[key];
        }
        
        int n = a.length();
        bool flag = false;
        
        for(int i=1; i<=n-1; i++)
        {
            bool case1, case2;
            string key1 = a.substr(0,i) + " " + b.substr(n-i,i);
            string key2 = a.substr(i,n-i) + " " + b.substr(0,n-i);
            bool temp1,temp2;
            
            if(mpp.find(key1) != mpp.end())
            {
                temp1 = mpp[key1];
            }
            else
            {
                temp1 = isScramble(a.substr(0,i), b.substr(n-i,i));
                mpp[key1] = temp1;
            }
            
            if(mpp.find(key2) != mpp.end())
            {
                temp2 = mpp[key2];
            }
            else
            {
                temp2 = isScramble(a.substr(i,n-i), b.substr(0,n-i));
                mpp[key2] = temp2;
            }
            
            case1 = temp1 && temp2;
            
            string key3 = a.substr(0,i) + " " + b.substr(0,i);
            string key4 = a.substr(i,n-i) + " " + b.substr(i,n-i);
            
            bool temp3, temp4;
            
            if(mpp.find(key3) != mpp.end())
            {
                temp3 = mpp[key3];
            }
            else
            {
                temp3 = isScramble(a.substr(0,i), b.substr(0,i));
                mpp[key3] = temp3;
            }
            
            if(mpp.find(key4) != mpp.end())
            {
                temp4 = mpp[key4];
            }
            else
            {
                temp4 = isScramble(a.substr(i,n-i), b.substr(i,n-i));
                mpp[key4] = temp4;
            }
            
            case2 = temp3 && temp4;
            
            if(case1 || case2)
            {
                flag = true;
                break;
            }
        }
        return mpp[key] = flag;
    }
};

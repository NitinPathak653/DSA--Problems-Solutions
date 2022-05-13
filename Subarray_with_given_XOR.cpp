/* interviewbit.com/problems/subarray-with-given-xor/
Given an array of integers A and an integer B.

Find the total number of subarrays having bitwise XOR of all elements equals to B. */

int Solution::solve(vector<int> &A, int B) {
    map<int,int> freq;
    int count = 0;
    int xorr = 0;

    for(auto it:A)
    {
        xorr = xorr^it;

        if(xorr==B)
        {
            count++;
        }

        if(freq.find(xorr^B) != freq.end())
        {
            count += freq[xorr^B];
        }

        freq[xorr] += 1;
    }
    return count;
}

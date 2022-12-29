class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>arr(n+1);
        for(int i=0; i<n+1; i++)
        {
            int setbit = __builtin_popcount(i); // setbit means no. of 1 in bit
            arr[i] = setbit;
        }
        return arr;
    }
};
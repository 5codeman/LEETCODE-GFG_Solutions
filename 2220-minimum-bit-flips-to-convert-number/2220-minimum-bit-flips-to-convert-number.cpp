class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        int ans=0;
        for(int i=0; i<32; i++)
        {

            if((start & 1) != (goal & 1))
            {
                ans++;
            }
            start >>= 1;
            goal >>= 1;
        }
        return ans;
    }
};
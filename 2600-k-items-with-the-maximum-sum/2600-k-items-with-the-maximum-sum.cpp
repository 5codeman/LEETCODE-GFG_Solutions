class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int ans = 0;
        if(numOnes > 0 && k > 0)
        {
            ans += min(numOnes,k);
            k -= ans;
        }
        
        if(k > 0 && numZeros > 0)
        {
            k -= min(k,numZeros);
        }
        
        if(k > 0 && numNegOnes > 0)
        {
            ans -= min(numNegOnes,k);
        }
        
        return ans;
    }
};
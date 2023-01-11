class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        map<int,bool> mp;
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=2; j<=nums[i]; j++)
            {
                while(nums[i]%j == 0)
                {
                    mp[j] = 1;
                    nums[i] /= j;
                }
            }
        }
        return mp.size();
    }
};
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur_sum = 0;
        int max_sum = INT_MIN;
        for(int i=0; i<nums.size(); i++)
        {
            if(cur_sum < 0) cur_sum = 0;
            cur_sum += nums[i];
            max_sum = max(max_sum, cur_sum);
        }
        return max_sum;
    }
};
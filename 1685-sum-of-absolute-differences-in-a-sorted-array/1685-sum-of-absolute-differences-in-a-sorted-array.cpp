class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> ans;
        int pre_sum = 0;
        int sum = 0;
        // Find Sum
        for(int i=0; i<nums.size(); i++)
        {
            sum += nums[i];
        }
    
        for(int i=0; i<nums.size(); i++)
        {
            int right = nums.size() - i;
            int left =  i;
            
            int insert = sum - (right*nums[i]) + (left * nums[i]) - pre_sum;
            ans.push_back(insert);
            pre_sum += nums[i];
            sum -= nums[i];
        }
        return ans;
    }
};
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int start_value = 1;
        int curr_sum = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            curr_sum += nums[i];
            if(curr_sum < 1) 
            {
                start_value += abs(curr_sum) + 1;
                curr_sum = 1;
            }
        }
        return start_value;
    }
};
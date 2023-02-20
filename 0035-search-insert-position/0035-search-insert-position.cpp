class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int nums_length = size(nums);
        int i = 0;
        for(;i<nums_length; i++)
        {
            if(nums[i]>=target)
            {
                return i;
            }
        }
        return i;
    }
};
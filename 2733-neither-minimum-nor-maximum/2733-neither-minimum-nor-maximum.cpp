class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums.size() <= 2 ? -1 : nums[((nums.size() / 2))];  
    }
};
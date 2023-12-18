class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int length=nums.size();
         return (nums[length-1] * nums[length-2]) - (nums[0] * nums[1]);
    }
};
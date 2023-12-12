class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int length=nums.size();
        sort(nums.begin(),nums.end());
        return (nums[length-1]-1) * (nums[length-2]-1); 
    }
};
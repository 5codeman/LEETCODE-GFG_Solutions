class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int totalSum = accumulate(begin(nums), end(nums), 0);
        int leftSum  = 0;
        for(int i = 0; i<nums.size(); i++) 
        {
            totalSum -= nums[i];
            if(leftSum == totalSum) return i;
            leftSum += nums[i];
        }
        return -1;
    }
};
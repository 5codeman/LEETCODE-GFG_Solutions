class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 0;
        long long sum = 0;
        for(int i = nums.size()-1; i >= 0; i--)
        {
            sum += nums[i];
            if(sum > 0) count++;
            
            else break;
        }
        return count;
        
    }
};
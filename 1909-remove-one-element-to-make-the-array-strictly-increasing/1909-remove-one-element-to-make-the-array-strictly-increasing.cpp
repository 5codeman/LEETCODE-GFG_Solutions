class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int count = 0;
        for(int i = 1; i < nums.size(); i++) 
        {            
            if(nums[i-1] >= nums[i]) 
            {   
                if(count == 1) return false;
                else if(i >= 2 && nums[i] <= nums[i-2]) nums[i] = nums[i-1];
                count++;
            }            
        } 
        if(count < 2) return true;
        return false;
    }
};
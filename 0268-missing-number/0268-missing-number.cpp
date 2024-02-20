class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int length=nums.size();
        
        if(nums[0]!=0) // sirf 0 ke lia (think)
        {
            return 0;
        }
        
        for(int i=0;i<length-1;i++)
        {
            if(nums[i]+1!=nums[i+1])
            {
                return nums[i]+1; // ye element nahi hoga array mai
            }
        }
        return length; // if element not found in array then ans is value of length (THINK)
        
    }
};
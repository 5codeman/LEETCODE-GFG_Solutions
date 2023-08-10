class Solution {
public:
    bool search(vector<int>& nums, int target) {
        //baad mai sahi approach se karna
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                return true;
            }
        }
        return false;
    }
};
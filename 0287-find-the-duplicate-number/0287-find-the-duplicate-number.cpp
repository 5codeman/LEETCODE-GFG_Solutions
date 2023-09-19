class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //iss q ko jaise Coding ninjas mai kia haio o(n) mai waise ker ke dekhana
        
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i])
            {
                return nums[i]; //or, nums[i-1]
            }
        }
        return 0;
    }
};
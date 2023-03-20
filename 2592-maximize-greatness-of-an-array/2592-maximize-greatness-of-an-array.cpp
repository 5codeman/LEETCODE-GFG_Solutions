class Solution {
public:
    int maximizeGreatness(vector<int>& nums) 
    {
       sort(nums.begin(),nums.end());
        int i = 0, j = 1;
        while(j < nums.size())
        {
            if(nums[i] == nums[j]) j++;
            else 
            {
                i++;
                j++;
            }
        } 
        return i;
    }
};
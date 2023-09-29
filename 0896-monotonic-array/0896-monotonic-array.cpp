class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int length=nums.size();
        int count_inc=0;
        int count_dec=0;
        //for incresing
        for(int i=0;i<length-1;i++)
        {
            if(nums[i]<=nums[i+1])
            {
                count_inc++;
            }
        }
        //for decresing
        for(int i=0;i<length-1;i++)
        {
            if(nums[i]>=nums[i+1])
            {
                count_dec++;
            }
        }
        
        if(count_inc==length-1)
        {
            return true;
        }
        
        else if(count_dec==length-1)
        {
            return true;
        }
        return false;
    }
};
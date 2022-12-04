class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long left = nums[0];
        int l_size = 1;
        long long right = 0;
        int r_size = nums.size()-1;
        for(int i=1; i<nums.size(); i++)
        {
            right += nums[i];
        }
        
        // Find min avg diff;
        int min_index = 0;
        int min_value = INT_MAX;
        for(int i=0; i<nums.size()-1; i++)
        {
            int temp = abs((left/l_size) - (right/r_size));
            if(temp < min_value)
            {
                min_index = i;
                min_value = temp;
            }
            left += nums[i+1];
            right -= nums[i+1];
            l_size++;
            r_size--;  
        }
        
        //for last index
        int temp = left/l_size; //right would be 0
        if(temp < min_value)
        {
            min_index = nums.size()-1;
        }
        return min_index;
    }
};
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // This code is without using any extra space
        int len = nums.size();
        if(k % len == 0) return;
        int curr_index = 0;
        int value1 = nums[curr_index];
        int next_index;
        int value2;
        int counter = 0;
        int start = 0;
        while(counter < len)
        {
            next_index = (curr_index + k) % len;
            value2 = nums[next_index];
            nums[next_index] = value1;
            curr_index = next_index;
            value1 = value2;
            
            // if cycle found
            if(curr_index == start)
            {
                curr_index = (curr_index + 1) % len;
                value1 = nums[curr_index];
                start++;
            }
            counter++;
        }
    }
};
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int length = nums.size();
        if(k % length == 0) return; // Here we have not to rotate
        
        int curr_index = 0;
        int value1 = nums[0];
        int next_index;
        int value2;
        int counter = 0;
        int start = 0;
        
        while(counter < length)
        {
            next_index = (curr_index + k) % length;
            value2 = nums[next_index];
            nums[next_index] = value1;
            curr_index = next_index;
            value1 = value2;
            
            // if i found any cycle
            if(curr_index == start)
            {
                curr_index = (curr_index + 1) % length;
                value1  = nums[curr_index];
                start++;
            }
            counter++;
        }
    }
};
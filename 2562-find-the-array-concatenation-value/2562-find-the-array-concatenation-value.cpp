class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) 
    {
        long long res = 0;
        int low = 0;
        int high = nums.size()-1;
        
        while(low < high)
        {
            string temp = to_string(nums[low]) + to_string(nums[high]);
            res += stoi(temp);
            low++;
            high--;
        }
        if(low == high)
        {
           res += nums[low];
        }
        return res;
    }
};
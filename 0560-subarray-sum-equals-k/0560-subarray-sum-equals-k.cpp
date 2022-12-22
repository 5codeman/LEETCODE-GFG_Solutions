class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // VIVEK THINK THIS Q, I AM UNABLE TO THINK THIS Q
        // WATCH VIDEO & UNDERSTAND Q BYSELF
        unordered_map<int,int>map;
        int sum = 0;
        int count = 0;
        for(int i=0; i<nums.size(); i++)
        {
            sum += nums[i];
            if(sum == k)
            {
                count++;
            }
            count += map[sum-k];
            map[sum]++;
        }
        return count;
    }
};
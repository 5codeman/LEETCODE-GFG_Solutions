#include<unordered_map>
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int>map;
        int sum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            sum += nums[i];
            if(sum % k == 0 && i>=1)
            {
                return true;
            }
            else if(map.count(sum % k) == 1)
            {
                if(i - map[sum % k] >= 2)
                {
                    return true;
                }
            }
            else
            {
                map[sum % k] = i;
            }
        }
        return false;
    }
};
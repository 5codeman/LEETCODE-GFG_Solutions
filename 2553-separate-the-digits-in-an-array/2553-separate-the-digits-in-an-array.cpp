class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans ;
        for(int i=0; i<nums.size(); i++)
        {
            string tmp = to_string(nums[i]);
            for(int i=0; i<tmp.size(); i++) ans.push_back(tmp[i]-'0');
        }
        return ans ;
    }
};
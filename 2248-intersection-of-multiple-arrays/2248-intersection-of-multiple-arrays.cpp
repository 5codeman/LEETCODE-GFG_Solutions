class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int n = nums.size(); 
        map<int,int> mp;
        vector<int> vec;
        for(int row=0;row<n;row++)
        {
            for(int col=0;col<nums[row].size();col++) mp[nums[row][col]]++;
        }
        for(auto element : mp)
        {
            if(element.second == n) vec.push_back(element.first);
        }     
        return vec;
    }
};
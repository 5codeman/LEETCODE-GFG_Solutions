class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;
        for(int i=0; i<nums.size(); i++) mp[nums[i]].push_back(i);
        int degree=0;
        for(auto it=mp.begin(); it!=mp.end(); it++) degree=max(degree,int(it->second.size()));
        int shortest=nums.size();
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second.size() == degree)
            {
                shortest=min(shortest, it->second.back()-it->second[0]+1);
            }
        }
        return shortest;
    }
};
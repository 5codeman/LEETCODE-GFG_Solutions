class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> ans;
        long long sum = 0, mx = 0;
        for(auto n: nums)
        {
            if(mx < n) mx = n;
            sum += n + mx;
            ans.push_back(sum);
        }
        return ans;
    }
};
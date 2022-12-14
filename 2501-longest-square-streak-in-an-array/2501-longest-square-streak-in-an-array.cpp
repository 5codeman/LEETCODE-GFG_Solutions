#include<unordered_map>
#include<bits/stdc++.h>
class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_map<int, int> map;
        int ans = 0;
        int len = nums.size();
        for(int i=0; i<len; i++)
        {
            map[nums[i]]++;
        }
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<len; i++)
        {
            int count = 1;
            long long x = nums[i];
            long long y = nums[i];
            long long key = x * y;
            while(key <= nums[len-1])
            {
                if(map.count(key) != 0) 
                {
                    count++;
                    key *= key;
                }
                else break;
            }
            ans = max(ans, count);
        }
        if(ans < 2) return -1;
        
        return ans;
    }
};
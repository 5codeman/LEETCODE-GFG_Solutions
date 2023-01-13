class Solution {
public:
    int findLucky(vector<int>& arr) {
        int max_ele = -1;
        unordered_map<int,int> mp;
        for(auto k: arr) mp[k]++;                             
        for(auto k: mp)
        {
            if(k.first==k.second) max_ele=max(max_ele,k.first);           
        }
        return max_ele;
    }
};
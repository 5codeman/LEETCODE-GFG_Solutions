#include<unordered_map>
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int>map;
        vector<vector<int>>ans;
        // push winner with loss 0
        for(int i=0; i<matches.size(); i++)
        {
            map[matches[i][0]] = 0;
        }
        
        for(int i=0; i<matches.size(); i++)
        {
            map[matches[i][1]]++;
        }
        
        unordered_map<int, int> :: iterator it = map.begin();
        vector<int>not_lost;
        vector<int>one_lost;
        
        while(it != map.end())
        {
            if(it -> second == 0)
            {
                not_lost.push_back(it->first);
            }
            if(it -> second == 1)
            {
                one_lost.push_back(it->first);
            }
            it++;
        }
        sort(not_lost.begin(), not_lost.end());
        sort(one_lost.begin(), one_lost.end());
        
        ans.push_back(not_lost);
        ans.push_back(one_lost);
        
        return ans;
    }
};
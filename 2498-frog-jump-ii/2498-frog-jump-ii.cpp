class Solution {
public:
    int maxJump(vector<int>& stones) {
        // VIVEK SOLVE THIS Q (I AM UNABLE TO SOLVE THIS PROBLEM)
        
        // solve this q myself and aache se isko samghana
        if(stones.size() == 2)
        {
            return stones[1] - stones[0];
        }
        int cost = 0;
        for(int i=0; i<stones.size()-2; i++)
        {
            int len = stones[i+2] - stones[i];
            cost = max(cost, len);
        }
        return cost;
    }
};
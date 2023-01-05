class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        sort(p.begin(), p.end());
        int lastpoint = p[0][1];
        int ans = 1;
        for(int i=1; i<p.size(); i++) 
        {  
            if(p[i][0] > lastpoint) 
            {
                ans++;
                lastpoint = p[i][1];
            }
            lastpoint = min(p[i][1],lastpoint);
        }
        return ans;
    }
};
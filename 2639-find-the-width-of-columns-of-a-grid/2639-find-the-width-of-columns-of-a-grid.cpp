class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<int> ans(n);
    
        for(int j=0; j<n; j++)
        {
            int l=0;
            for(int i=0; i<m; i++)
            {
                l = max(l, int(to_string(grid[i][j]).size()));
            }
            ans[j] = l;
        }
        return ans;
    }
};
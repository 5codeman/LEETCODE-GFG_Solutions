class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int row_size = grid.size();
        int col_size = grid[0].size();
        int ans = 0;
        for(int i=0; i<grid.size(); i++)
        {
            sort(grid[i].begin(), grid[i].end());
        }
        
        for(int j=col_size-1; j>=0; j--)
        {
            int temp = 0;
            for(int i=0; i<row_size; i++)
            {
                temp = max(temp, grid[i][j]);
            }
            ans += temp;
        }
        
        return ans;
    }
};
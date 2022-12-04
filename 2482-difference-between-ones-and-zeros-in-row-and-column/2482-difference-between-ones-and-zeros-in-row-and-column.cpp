class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int> row;
        vector<int> col;
        vector<vector<int>>ans;
        
        // Row wise
        for(int i=0; i<grid.size(); i++)
        {
            int count = 0;
            for(int j=0; j<grid[i].size(); j++)
            {
                if(grid[i][j] == 1) count++;
                else count--;
            }
            row.push_back(count);
        }
        
        // Col Wise
        for(int i=0; i<grid[0].size(); i++)
        {
            int count = 0;
            for(int j=0; j<grid.size(); j++)
            {
                if(grid[j][i] == 1) count++;
                else count--;
            }
            col.push_back(count);
        }
        
        // Fill in Diff array
        for(int i=0; i<grid.size(); i++)
        {
            vector<int>temp;
            for(int j=0; j<grid[i].size(); j++)
            {
                temp.push_back(row[i]+col[j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

/* COMPLEXITY (NOT CLEAR)
-> TC = O(M*N)
-> SC = O(M+N)
*/
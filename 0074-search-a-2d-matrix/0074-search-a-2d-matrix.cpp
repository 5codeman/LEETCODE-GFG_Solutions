class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        //iss q ko baad mai binary search aur bhiu aahe approach se karna......
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==target) return true;
            }
        }
        return false;
    }
};
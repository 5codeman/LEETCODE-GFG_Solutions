class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //Find the correct row for target element using Binary Search
        int start = 0;
        int end = matrix.size() - 1;
        int target_row = -1;
        
        while(start <= end)
        {
            int mid = (start + end) / 2;
            int col = matrix[mid].size() - 1;
            if(matrix[mid][0] <= target && matrix[mid][col] >= target)  
            {
                target_row = mid;
                break;
            }
            
            else if(matrix[mid][col] > target) end = mid - 1;
            
            else start = mid + 1;
        }
        if(target_row != -1)
        {
            // Binary search for finding target in the target row
            int start = 0;
            int end = matrix[target_row].size() - 1;
            while(start <= end)
            {
                int mid = (start + end) / 2;
                if(matrix[target_row][mid] == target) return true;
            
                else if(matrix[target_row][mid] > target) end = mid - 1;
            
                else start = mid + 1;
            }
        }
        return false;
    }
};
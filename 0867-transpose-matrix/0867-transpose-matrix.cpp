class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>>output;
        for(int i=0; i<matrix[0].size(); i++) //column
        {
            vector<int>temp;
            for(int j=0; j<matrix.size(); j++) //row
            {
                temp.push_back(matrix[j][i]);
            }
            output.push_back(temp);
        }
        return output;
    }
};
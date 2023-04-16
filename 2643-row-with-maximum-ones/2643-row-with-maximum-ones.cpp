class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat)
    {
        vector<int> res{-1, -1};
        for(int i = 0; i < mat.size(); ++i)
        {
            int one = count(mat[i].begin(), mat[i].end(), 1);
            if(one > res[1]) res = {i, one};
        }
        return res;
    }
};
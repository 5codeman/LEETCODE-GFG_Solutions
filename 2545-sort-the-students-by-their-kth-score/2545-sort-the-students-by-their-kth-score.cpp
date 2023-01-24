class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int rows = score.size();
        
        priority_queue<pair<int, int>> pq;
        for(int i=0; i<rows; i++)
        {
            pq.push({score[i][k], i});
        }

        vector<vector<int>> res;
        while(!pq.empty())
        {
            int row = pq.top().second;
            pq.pop();
            res.push_back(score[row]);
        }
        return res;
    }
};
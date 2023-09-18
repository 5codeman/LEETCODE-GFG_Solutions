#include<queue>
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
      pair<int, int>p;
      priority_queue<pair<int, int>,vector<pair<int, int>>, greater<pair<int, int>>>pq; 
      //min PQ bhi use ker shakte the 
      //iss q ke bare mai aur dekhna aache se kaise ker shakte
        
        for(int i=0; i<mat.size(); i++)
        {
            int count=0;
            for(int j=0; j<mat[0].size(); j++)
            {
                if(mat[i][j]==1)
                {
                    count++;
                }
            }
            p.first=count;
            p.second=i;
            pq.push(p);
        }
        
        // for(int i=0; i<mat.size()-k; i++)//pq min wala banate to ye nahi karan hota
        // {
        //     pq.pop(); //pop row-k times
        // }
        
        vector<int>ans;
        for(int i=0; i<k; i++)
        {
            pair<int,int>temp=pq.top();
            ans.push_back(temp.second);
            pq.pop();
        }
        return ans;
    }
};
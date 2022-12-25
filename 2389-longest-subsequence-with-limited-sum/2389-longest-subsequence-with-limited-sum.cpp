#include<queue>
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        //vivek think this q// i think PQ for good comlexity// binary search se bhi hoga try karna
        
        // yaha order ka dhyaan nahi rakhenge kyunki sum subsequence print bolta then issue tha sum bola hai to           sort ker ke bhi sum karenge to wo bhi subsequence mai aa hi raha hoga.
        
        // pq wala kaam 3,10,21 subko eak eak ker ke sum check karne se bhi ho jayega aur binary search se bhi              ho jayega
        // ye code banane ke baad utna aach nahi laga alag approach se banana
        
        sort(nums.begin(),nums.end());
        vector<int>ans(queries.size(),0);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq; //min pq
        pair<int,int>temp;
        
        // insert in PQ
        for(int i=0; i<queries.size(); i++)
        {
            temp.first = queries[i];
            temp.second = i;
            pq.push(temp);
        }
        
        //check sum
        int i=0;
        int sum = nums[0];
        while(!pq.empty())
        {
            temp = pq.top();
            pq.pop();
            for(; i<nums.size(); i++)
            {
                if(sum > temp.first)
                {
                    break;
                }
                if(i!=nums.size()-1)
                {
                    sum += nums[i+1];
                }
                
            }
            ans[temp.second] = i;
        }
        return ans; 
    }
};
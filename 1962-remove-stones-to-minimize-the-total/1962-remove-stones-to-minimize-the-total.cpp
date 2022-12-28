class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        int n = piles.size();
        //PUSH IN PQ
        for(int i=0; i<n; i++)
        {
            pq.push(piles[i]);
        }
        for(int i=0; i<k; i++)
        {
            int data = pq.top();
            pq.pop();
            pq.push(data - data/2);
        }
        int sum = 0;
        while(!pq.empty())
        {
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};
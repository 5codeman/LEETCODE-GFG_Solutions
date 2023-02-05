class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) 
    {
        long long ans = 0;
        priority_queue<int> pq;
        for(auto n: gifts) pq.push(n);
        while(k--)
        {
            pq.push(sqrt(pq.top())); 
            pq.pop(); 
        }
        while(pq.size() > 0)
        { 
            ans += pq.top(); 
            pq.pop(); 
        }
        return ans;
    }
};
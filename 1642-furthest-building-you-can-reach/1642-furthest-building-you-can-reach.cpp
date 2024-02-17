#include<queue>
class Solution {
public:
    //thora bahut maine soccha baaki vivek socha hai pura(uska bolne pe nahi samghe the fir mughe thora      hit kia usi type ka)   // baad mai ye q aache se dekhna
    
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        
        // Iska soloution 5cho approah se jaru read karna and samghna(leet code premium)
        priority_queue<int>pq;
        int count=0;
        for(int i=1; i<heights.size(); i++)
        {
            if(heights[i-1]<heights[i])
            {
                int temp=heights[i]-heights[i-1];
                pq.push(temp);
                count += temp;
            }
            if(count>bricks)
            {
                int temp=pq.top();
                pq.pop();
                if(ladders>0)
                {
                    ladders--;
                    count -= temp;
                }
                else
                {
                    return i-1;
                }
            }
        }
        return heights.size()-1;
    }
};
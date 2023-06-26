#include<queue>
class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        pair<int,int>pr;
        int i = 0;
        int j = costs.size()-1;
        
        // insert candidate element from left and right in pq
        if(candidates*2 >= costs.size())
        {
            for(; i<costs.size(); i++)
            {
                pr.first = costs[i];
                pr.second = i;
                pq.push(pr);
            }
        }
        else
        { 
            while(i<candidates) 
            {
                pr.first = costs[i];
                pr. second = i;
                pq.push(pr);
                pr.first = costs[j];
                pr. second = j;
                pq.push(pr);
                i++, j--;
            }
        }
        
        // work on k element
        long long low_cost = 0;
        for(int p=0; p<k; p++)
        {
            pr = pq.top();
            pq.pop();
            low_cost += pr.first;
            if(pr.second < i && i<=j)
            {
                pr.first = costs[i];
                pr. second = i;
                pq.push(pr);
                i++;
            }
            else if(pr.second > j && i<=j)
            {
                pr.first = costs[j];
                pr. second = j;
                pq.push(pr);
                j--;
            }
        }        
      return low_cost;
    }
};
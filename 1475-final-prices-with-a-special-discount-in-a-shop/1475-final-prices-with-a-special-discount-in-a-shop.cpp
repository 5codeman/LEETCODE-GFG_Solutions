class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        stack<int> s;
        for(int i=prices.size()-1;i>=0;i--)
        {
            while(!s.empty() && s.top()>prices[i]) s.pop();
            int x = prices[i];
            if(!s.empty()) prices[i] -= s.top();
            s.push(x);
        }
        return prices;
    }
};
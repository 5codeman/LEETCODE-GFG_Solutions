class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int length = prices.size();
        int SP = prices[0];
        int BP = prices[0];
        
        int profit = 0;
        
        for(int i = 0; i < length; i++)
        {
            if(prices[i] > SP)
            {
                SP = prices[i];
                profit = max(profit, SP - BP);   
            }
            else if(prices[i] < BP)
            {
                BP = prices[i];
                SP = prices[i];
            }
        }
        return profit;
    }
};
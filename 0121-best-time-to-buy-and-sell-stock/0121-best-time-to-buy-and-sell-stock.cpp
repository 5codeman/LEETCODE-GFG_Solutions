class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //vivek code
        int length=prices.size();
        int current_selling_price = prices[0];
        int current_buying_price = prices[0];
        int profit = 0;
        for(int i=1; i<length; i++)
        {
            if(prices[i] > current_selling_price)
            {
                current_selling_price=prices[i];
                if(current_selling_price-current_buying_price > profit)
                {
                    profit = current_selling_price-current_buying_price;
                }   
            }
            else if(prices[i]<current_buying_price)
            {
                current_selling_price = prices[i];
                current_buying_price = prices[i];
            }
        }  
        return profit;
    }
};
class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int a = prices[0]+prices[1];
        if(a<=money){
            return money-a;
        }
        else
            return money;
    }
};


        
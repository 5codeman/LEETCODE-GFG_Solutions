class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int my_coin=0;
        sort(piles.begin(), piles.end());
        
        for(int i=piles.size()/3; i<piles.size(); i+=2)
        {
            my_coin=my_coin+piles[i];
        }
        return my_coin;
    }
};
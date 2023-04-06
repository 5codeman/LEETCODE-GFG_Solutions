class Solution {
public:
    int arrangeCoins(int n) {

        if(n == 1) return 1;

        int count = 0;
        
        for(int i = 1; n > 0; ++i)
        {
            n -= i;
            count++;
        }

        if(n == 0) return count;
        else return count - 1;
    }
};
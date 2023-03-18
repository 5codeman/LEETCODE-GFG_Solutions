class Solution {
public:
    int distMoney(int money, int children) {
        
        if(money < children) return -1;
        int ans = 0;
        for(int i = 1; i <= children; i++)
        {
            int cur = i * 8;
            int other = money - cur;
            if(other < (children - i) || (other == 4 && (children - i) == 1)) break;
            
            if(other > 0 && i == children) break;
            ans = i;            
        }
        return ans;        
    }
};
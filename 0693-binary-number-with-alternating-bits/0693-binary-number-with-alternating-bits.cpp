class Solution {
public:
    bool hasAlternatingBits(int n) {
        long x = n ^ (n>>1);
        long y = x & (x+1);
        
        if(y == 0) return true;
        
        return false;
    }
};
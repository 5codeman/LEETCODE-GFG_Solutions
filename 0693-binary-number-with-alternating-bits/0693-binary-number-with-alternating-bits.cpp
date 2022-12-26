class Solution {
public:
    bool hasAlternatingBits(int n) {
        // khud bhi aata tha but normal approach se ye wala discuss se sikhe
        long x = n ^ (n >> 1); 
        x = x & (x+1);
        
        return x==0;
    }
};
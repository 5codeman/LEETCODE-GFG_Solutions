class Solution {
public:
    int passThePillow(int n, int time) {
        
        n--;
        
        int rem = time % n;
        int quo = time / n;
        
        if( quo%2 != 0 ) return (n-rem)+1;
        
        return rem+1 ;
    }
};
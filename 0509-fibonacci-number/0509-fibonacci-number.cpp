class Solution {
public:
    int fib(int n) {
        if(n==0||n==1)
        {
            return n;
        }
        
        int small_output=fib(n-1);
        int small_output1=fib(n-2);
        
        int nth_term=small_output+small_output1;
        
        return nth_term;
    }
};
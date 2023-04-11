class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        // do it letter with Bit manuplation
        int comp = 0;
        int i = 0;
        while(n != 0)
        {
            if(n % 2 == 0) comp += (1) * pow(2,i); // here i directly first check for compliment and convert into decimal
            
            // else  value of compliment is 0 so add alwas 0 
            
            n /= 2;
            i++;
        }
        return comp;
    }
};

class Solution {
public:
    int findComplement(int num) {
        // do it letter with Bit manuplation
        int comp = 0;
        int i = 0;
        while(num != 0)
        {
            if(num % 2 == 0) comp += (1) * pow(2,i); // here i directly first check for compliment and convert into decimal
            
            // else  value of compliment is 0 so add alwas 0 
            
            num /= 2;
            i++;
        }
        return comp;
    }
};
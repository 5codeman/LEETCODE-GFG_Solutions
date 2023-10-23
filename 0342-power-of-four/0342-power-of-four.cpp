class Solution {
public:
    bool isPowerOfFour(int n) {
        // Vvek think this code
        if(n<1) // for negative no. and 0
        {
            return false;
        }
        while(n!=1)
        {
            if(n%4 != 0) // means contain remainder, not perfectly divided
            {
                return false;
            }
            n = n/4;
        }
        return true; // n==1 ke lia yahi true ho raha hai
    }
};

/*COMPLEXITY
-> TC = 
-> SC = 
*/
class Solution {
public:
    int countPrimes(int n) {
        //Solve by Sieve of erathosthenes approach
        
        //1. first we make array or vector of n+1 size and inser true for index 2 to last index. we not focus on 0 and 1 index because oure prime no. is start from 2.
        
        // 2. Then we run a loop from i = 2 to n or n/2 or (*square root of n* -> This is the more optimised way).
        
        //3. Then check at every index that if any index is filled as true then run a loop till n and mark all the multiples of i as false. We start to run the loop from 2 * i or (i square(i*i) -> This is the more optimised way). else skip that index
        
        vector<bool>arr(n, true);
        int count = 0;
        
        for(int i = 2; i <= sqrt(n-1); i++)
        {
            if(arr[i] == true) 
            {
                for(int j = i * i; j < n; j = j+i)
                {
                    arr[j] = false; // its not a prime no.
                }
            }
        }
        
        // count in the vector that which index is stored as true, because all the left true index is a            prime no.
        
        for(int i = 2; i < n; i++)
        {
            if(arr[i] == true) count++;
        }
        
        return count;
    }
};
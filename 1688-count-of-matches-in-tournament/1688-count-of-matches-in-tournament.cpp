class Solution {
public:
    int numberOfMatches(int n) {
       
        int count=0;
        while(n != 1)
        {
            
            if(n % 2 == 0) //For even
            {
                n=n/2;
                count=count+n;
            }
        
            else //For odd
            {
                n=n-1; //not more imp
                n=n/2;
                count=count+n;
                n=n+1; //eak team odd mai jo aise hi qualify ho jayega wo hai ye
            }          
        }
        return count;
    }
};
class Solution {
public:
    vector<int> evenOddBit(int n) {
        
        int index = 0;
        int even = 0 , odd = 0;

        while(n != 0)
        {
            if(n % 2 == 1)
            {
                if(index % 2) odd++;
                else even++;
            }
            index++;
            n /= 2;
        }
        
        return {even,odd};
    }
};
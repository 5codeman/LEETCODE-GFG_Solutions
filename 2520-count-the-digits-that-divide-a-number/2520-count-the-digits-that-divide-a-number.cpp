class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int val = num;
        while(num != 0)
        {
            if(val % (num%10) == 0) count ++;
            num /= 10;
        }
        return count;
    }
};
// i also solve this q using math pattern in O(1) Solve it letter
class Solution {
public:
    int countEven(int num) {
        int ans = 0;
        for (int i = 1; i <= num; i++) 
        {
            int n = i, sum = 0;
            while (n != 0) 
            {
                sum += n % 10;
                n /= 10;
            }
            ans += sum % 2 == 0;
        }
        return ans;
    }
};
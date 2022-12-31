class Solution {
public:
    int countDigit(long long n)
    {
        if (n/10 == 0) return 1;
        return 1 + countDigit(n / 10);
    }
    
    int findNumbers(vector<int>& nums) {
        int even_count = 0;
        for(int i=0; i<nums.size(); i++)
        {
            int x = nums[i];
            if(countDigit(x) % 2 == 0) even_count++;
        }
        return even_count;
    }
};
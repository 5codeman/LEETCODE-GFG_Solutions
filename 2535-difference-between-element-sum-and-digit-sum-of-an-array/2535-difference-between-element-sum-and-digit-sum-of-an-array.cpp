class Solution {
public:
    int digitSum(int num)
    {
        int sum = 0;
        while(num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) 
    {
        int ele = 0, digit = 0;
        for(int num : nums)
        {
            ele += num;
            digit += digitSum(num);
        }
        return ele - digit;
    }
};
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int max = INT_MIN, j = 0, sum = 0;
        double avg = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if(i >= k-1)
            {
                if(sum > max) max = sum;
                 sum-=nums[j];
                 j++;
            }
        }
        avg = max * 1.0 / k;
        return avg;
    }
};
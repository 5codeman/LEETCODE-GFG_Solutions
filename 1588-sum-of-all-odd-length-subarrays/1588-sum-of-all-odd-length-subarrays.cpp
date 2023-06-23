class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        // do this q with optimised way
        
        int odd_subarrays_sum = 0;
        for(int i = 1; i <= arr.size(); i += 2) // it determine the length of subarray
        {
            for(int j = 0; j <= arr.size() - i; j++) // 
            {
                for(int k = j; k < i + j; k++)
                {
                    odd_subarrays_sum += arr[k];
                }
            }
        }
        return odd_subarrays_sum;
    }
};
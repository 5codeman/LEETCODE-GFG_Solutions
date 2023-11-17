class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max=INT_MIN;  //0
        int sum=0;
        int i=0, j=nums.size()-1;
        while(i<j)
        {
            sum = nums[i]+nums[j];
            if(sum>max)
            {
                max = sum;
            }
            i++;
            j--;
        }
        return max;
    }
};
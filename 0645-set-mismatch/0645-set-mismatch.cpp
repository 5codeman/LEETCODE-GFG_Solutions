class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>arr(nums.size(),0);
        vector<int>ans(2);
        for(int i=0; i<nums.size(); i++)
        {
            arr[nums[i]-1]++;
        }
        
        for(int j=0; j<arr.size(); j++)
        {
            if(arr[j] == 2)
            {
                ans[0] = j+1;
            }
            else if(arr[j] == 0)
            {
                ans[1] = j+1;
            }
        }
        return ans;
    }
};
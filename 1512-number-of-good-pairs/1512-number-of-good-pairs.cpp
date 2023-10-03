class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int nums_size=size(nums);
        int good_pairs=0;
        for(int i=0;i<nums_size;i++)
        {
            for (int j=i+1;j<nums_size;j++)
            {
                if(nums[i]==nums[j])
                {
                    good_pairs++;
                }
            }
        }
        return good_pairs;
    }
};
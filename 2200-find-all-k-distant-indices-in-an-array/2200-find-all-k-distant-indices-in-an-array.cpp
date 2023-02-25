class Solution {
public:
    //ye q soach lia hai aacha approach bhi baad mai usse karna
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) 
    {
    vector<int> ans;
    for(int i=0; i<size(nums); i++)
    {
        for(int j=0; j<size(nums); j++)
        {
            if(abs(i-j)<=k && nums[j]==key)
            {
                ans.push_back(i);
                break;
            }
        }
    }
    return ans;
}
};
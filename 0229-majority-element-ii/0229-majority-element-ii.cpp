class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int length=nums.size();
        sort(nums.begin(),nums.end());
        int count=1;
        int k=0;
        int output[2]; 
        
        for(int i=1;i<length;i++)
        {
            if(nums[i-1]==nums[i])
            {
                count++;
            }
            
            else
            {
                if(count>length/3)
                {
                    output[k]=nums[i-1];
                    k++;
                }
                count=1;
            }
        }
        if(count>length/3) // for last n element.
        {
             output[k]=nums[length-1];
             k++;
        }
        
        vector<int> ans(output,output+k);
            return ans;
        
    }
};
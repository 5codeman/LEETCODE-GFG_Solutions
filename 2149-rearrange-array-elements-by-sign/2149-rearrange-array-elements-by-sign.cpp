class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int length=nums.size();
        int result[length];
        int j=0;
        for(int i=0;i<length;i++)
        {
            if(nums[i]>0)
            {
                result[j]=nums[i];
                j=j+2;
            }
        }
        j=1;
       
        for(int i=0 ;i<length;i++)
        {
            if(nums[i]<0)
            {
                result[j]=nums[i];
                j=j+2;
            }
        }
         vector<int>output(result,result+length);
            return output;
    }
};
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int length=size(nums);
        for(int i=0; i<length;i++)
        {
            if(nums[i]%2!=0)
            {
                if(nums[length-1]%2==0)
                {
                    int temp= nums[i];
                    nums[i]=nums[length-1];
                    nums[length-1]=temp;
                    length--;
                }
                else
                {
                    length--;
                    i--;
                }
            }
        }
        return nums;
    }
};
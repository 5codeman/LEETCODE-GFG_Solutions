class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& div) {
        int count = 0, divisor = 0;
        for(int i = 0; i < div.size(); i++) {
            int div_count = 0;
            for(int j = 0; j < nums.size(); j++) 
            {
                if(nums[j] % div[i] == 0) div_count++;
            }
            if(count == div_count) 
            {
                divisor = divisor == 0 ? div[i] : min(divisor, div[i]);
            }
            else if(div_count > count) 
            {
                count = div_count;
                divisor = div[i];
            }
        }
        return divisor;
    }
};
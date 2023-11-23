class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        int prod = 1;
        int st = 0;
        int end = nums.size() - 1;
        int max_st = 0;
        int max_end = 0;

        for(int i=0; i<nums.size(); i++)
        {
          prod *= nums[i];
          if(prod > maxi)
          {
              maxi = max(prod,maxi);
              max_st = st;
              max_end = i;
          }
          if(prod==0) 
          {
              st = i + 1;
              prod=1;
          }
        }
        prod=1;
        for(int i = nums.size()-1; i >= 0; i--)
        {
          prod *= nums[i];
          if(prod > maxi)
          {
              maxi = max(prod,maxi);
              max_st = i;
              max_end = end;
          }
          if(prod == 0) 
          {
              prod = 1;
              end = i - 1;
          }
        }
        cout << max_st << " " << max_end;
        return maxi;
    }
};


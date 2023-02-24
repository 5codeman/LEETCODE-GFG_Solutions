class Solution {
public:
    string largestGoodInteger(string nums) {
    int n = nums.size();
    string temp;
    string result = "";
    for(int i=0; i<n-2; i++)
    {
        if (nums[i+1]== nums[i] && nums[i+2]== nums[i])
        {
            temp = nums.substr(i, 3);
            result = max(result, temp);
        }
    }
     return result;
    }
};
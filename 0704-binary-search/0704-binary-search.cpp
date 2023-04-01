class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        //do by recurssion also
        
        int length = nums.size();
        int SI = 0;
        int LI = length-1;
        
        while(SI <= LI)
        {
            int mid = (SI + LI)/2;
            if(nums[mid] == target) return mid;

            if(target > nums[mid]) SI = mid + 1;

            else if(target < nums[mid]) LI=mid-1;
        }
         return -1;
    }
};
class Solution {
public:
    // Code for Binary Search
    int Binary_search(vector<int>& nums, int low, int high)
    {
        int len = nums.size();
        while(low <= high)
        {
            int mid = (low + high) / 2;
            int  prev = (mid + len - 1) % len;
            int next = (mid + 1) % len;
            
            if(nums[prev] > nums[mid] &&  nums[mid] < nums[next]) return mid;
            else if(nums[mid] > nums[len - 1])
            {
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return 0;
    }
    int findMin(vector<int>& nums) {
        int find_min = Binary_search(nums, 0, nums.size()-1);
        return nums[find_min];
    }
};
class Solution {
public:
    // Code for Binary Search
    int Binary_search(vector<int>& nums, int target, bool left)
    {
        int low = 0;
        int high = nums.size() - 1;
        int index = -1;
        while(low <= high)
        {
            int mid = (low + high) / 2;
            
            if(nums[mid] == target)
            {
                index = mid;
                if(left == true) high = mid - 1;
                else low = mid + 1;
            }
            else if(nums[mid] > target)
            {
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return index;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>arr(2, -1);
        arr[0] = Binary_search(nums, target, true);// true means search for left side only
        arr[1] = Binary_search(nums, target, false);
        
        return arr;
    }
};
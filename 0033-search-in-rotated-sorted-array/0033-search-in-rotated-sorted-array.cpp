// we can solve this q by 2logn mear binary search for first find minimum and then for 2                    seprated array (aditya bhaiya approach)

class Solution {
public:
     // Code for Binary Search for find minimu element
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
    
    // Code for Binary Search
    int Binary_Search(vector<int>& nums, int target, int low, int high)
    {
        while(low <= high)
        {
            int mid = (low + high) / 2;
            
            if(nums[mid] == target) return mid;
            
            else if(nums[mid] > target)
            {
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int find_min = Binary_search(nums, 0, nums.size()-1);
        int left_find = Binary_Search(nums, target, 0, find_min - 1); // befor minimum
        int right_find = Binary_Search(nums, target, find_min, nums.size()-1); // after miimum
        
        if(left_find != -1) return left_find;
        else return right_find;
            
    }
};


        
//         // But this is think by me and it is only o(logn)
        
//         int low = 0;
//         int high = nums.size() - 1;
//         while(low <= high)
//         {
//             int mid = (low + high) / 2;
            
//             if(nums[mid] == taregt) return mid;
            
//             else if(nums[mid] > target && nums[high] >= target)
//             {
//                 low = mid + 1;
//             }
            
//             else if(nums[mid] > target && nums[low] <= target)
//             {
//                 high = mid - 1;
//             }
            
//             else if(nums[mid] < target && nums[low] <= target)
//             {
//                 high = mid - 1;
//             }
//         }
        
class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        
        int n, m;
        n = nums1.size();
        m = nums2.size();
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        int i, j;
        
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                if(nums1[i] == nums2[j]) return nums1[i];
            }
        }
        
        int x = nums1[0];
        int y = nums2[0];
        
        if(x < y) return 10 * x + y;
        
        else return 10 * y + x;
        
        return -1;
    }
};
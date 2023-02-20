class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) 
    {
        vector<vector<int >> res;
        int i = 0;
        int j = 0;
        int n = nums1.size();
        int m = nums2.size();
        
        while(i<n && j<m)
        {
            int id1 = nums1[i][0];
            int id2 = nums2[j][0];
            
            if(id1 == id2)
            {
                int sum = nums1[i][1] + nums2[j][1];
                res.push_back({id1,sum});
                i++;
                j++;
            }
            
            else if(id1 > id2)
            {
                res.push_back({id2,nums2[j][1]});
                j++;
            }
            
            else if(id1 < id2)
            {
                res.push_back({id1,nums1[i][1]});
                i++;
            }                     
        }
        
        while(i < n)
        {
            int id1 = nums1[i][0];
            res.push_back({id1,nums1[i][1]});
            
            i++;
        }
        
        while(j < m)
        {
            int id2 = nums2[j][0];
            res.push_back({id2,nums2[j][1]});
        
            j++;
        }
        
        return res;
    }
};
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        int length1=nums1.size();
        int length2=nums2.size();
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        
        //2d vector ka hint liye hai
        //for nums1 unique
        vector<vector<int>> ans;
        vector<int> output;
        for(int i=0;i<length1-1;i++)
        {
            if(nums1[i]!=nums1[i+1])
            {
                int j=0;
                for(;j<length2;j++)
                {
                    if(nums1[i]==nums2[j])
                    {
                        break;
                    }
                }
                if(j==length2)
                {
                    output.push_back(nums1[i]);
                }   
            }
        }
        
        //for last elemet
                int j=0;
                for(;j<length2;j++)
                {
                    if(nums1[length1-1]==nums2[j])
                    {
                        break;
                    }
                }
                if(j==length2)
                {
                    output.push_back(nums1[length1-1]);
                }   
        
        ans.push_back(output);
    
        //for nums2 unique
        vector<int> output1;
       for(int i=0;i<length2-1;i++)
        {
           if(nums2[i]!=nums2[i+1])
           {
            int j=0;
            for(;j<length1;j++)
            {
                if(nums2[i]==nums1[j])
                {
                    break;
                }
            }
            if(j==length1)
            {
                output1.push_back(nums2[i]);
            }
           }
        }
               //for last elemet
                int k=0;
                for(;k<length1;k++)
                {
                    if(nums2[length2-1]==nums1[k])
                    {
                        break;
                    }
                }
                if(k==length1)
                {
                    output1.push_back(nums2[length2-1]);
                }  
        ans.push_back(output1);
        return ans;
    }
};
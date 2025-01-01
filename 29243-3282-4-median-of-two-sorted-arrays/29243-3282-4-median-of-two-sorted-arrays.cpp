class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int length=nums1.size();
        int length1=nums2.size();
        int new_arr[length+length1];
        int j=0;
        int k=0;
        int i=0;
        
        
        //merge two sorted array
        for(;j<length && k<length1; i++)
        {          
            if(nums1[j]<nums2[k])
            {
                new_arr[i]=nums1[j];
                j++;
            }
            else 
            {
                new_arr[i]=nums2[k];
                k++;
            }
        }
        
        if(j==length)
        {
            for(;k<length1;k++)
            {
                new_arr[i]=nums2[k];
                i++;
            }
        }
        
        else if(k==length1)
        {
            for(;j<length;j++)
            {
                new_arr[i]=nums1[j];
                i++;
            }
        }
     
     //return median
        
     int new_length=length+length1;
     int  median=new_length/2;
     if(new_length %2!=0) //means odd length
     {
        return new_arr[median];
     }
        
     float ans =(new_arr[median]+new_arr[median-1])/2.0;
        return ans;
    }
};
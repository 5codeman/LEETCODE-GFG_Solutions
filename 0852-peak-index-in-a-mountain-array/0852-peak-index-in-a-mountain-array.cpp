class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        // 0 index ans last index include nahi karna hai but, no problem array yaha pe apne favourable mai aayega.{read problem statement}
        
        int length=arr.size();
        int peak=0;
        int element=0;
        for(int i=0;i<length;i++) 
        {
            if(arr[i]>element)
            {
                element=arr[i];
                peak=i;
            }
        }
        return peak;
    }
};
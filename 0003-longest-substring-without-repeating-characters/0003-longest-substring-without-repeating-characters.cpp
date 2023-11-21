class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        //VIVEK CODE 
        int length=s.size();
        int arr[256]={0};
        for(int i=0; i<256; i++)
        {
            arr[i]=-1;
        }
        int max_size=0;
        int start=0;
        for(int i=0; i<length; i++)
        {
            if(arr[s[i]]>=start)
            {
                int temp=i-start; // Start is use for finding length
                if(temp>max_size)
                {
                    max_size=temp;
                }
                start=arr[s[i]]+1;
            }
            arr[s[i]]=i;
        }
        if(length-start>max_size)
        {
            max_size=length-start;
        }
        return max_size;
    }
};
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int>map;
        stack<int>st;
        int len = nums2.size();
        int len1 = nums1.size();
        vector<int>arr;
        
        for(int i = 0; i < len; i++)
        {       
            if(!st.empty() && nums2[i] > st.top())
            {
                while(!st.empty() && nums2[i] > st.top()) 
                {
                    map[st.top()] = nums2[i];
                    st.pop();
                }
            }    
            st.push(nums2[i]);
        }
        
        // itarting over nums 1 for fint greter  element in map
        for(int i = 0; i < len1; i++)
        {
            if(map.count(nums1[i]) == 0) arr.push_back(-1);

            else arr.push_back(map[nums1[i]]);
        }
        return arr;
    }
};
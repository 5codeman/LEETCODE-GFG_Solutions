class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        // Same as next greater 1 q but the main cath is here how to tarverse as a circular
        int len = nums.size();
        vector<int> arr(len,-1);
        stack<int>st;
        
        for(int i = 0; i < (2*len)-1; i++)
        {
            if(!st.empty() && nums[i % len] > nums[st.top()])
            {
                while(!st.empty() && nums[i % len] > nums[st.top()])
                {
                    arr[st.top()] = nums[i % len];
                    st.pop();
                }
            }
            st.push(i % len);
        }
        return arr;
    }
};
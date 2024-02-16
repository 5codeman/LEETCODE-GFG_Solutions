class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        int size = temperatures.size();
        vector<int> arr(size, 0);
        
        for(int i = size-1; i >= 0; i--)
        {
            while(!st.empty())
            {
                int top = st.top();
                if(temperatures[i] >= temperatures[top])
                {
                    st.pop();
                    arr[i] = 0;
                }
                else 
                {
                    arr[i] = top - i;
                    break;
                }
            }
            st.push(i);
        }
        return arr;
        
    }
};
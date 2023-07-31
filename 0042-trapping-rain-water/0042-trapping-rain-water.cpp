#include<bits/stdc++.h>
class Solution {
public:
    // CHIRAG CODE (I am very happy today because i solved this problem under 20 minutes)
    int trap(vector<int>& height) {
        
        int len = height.size();
        stack<int>st;
        int water_traped = 0;
        int highest = INT_MIN;
        
        for(int i = 0; i < len; i++)
        {
            if(height[i] >= highest)
            {
                while(!st.empty())
                {
                    water_traped += highest - st.top();
                    st.pop();
                }
                highest = height[i];
            }
            else st.push(height[i]);
        }
        
        //check if stack is empty or long tower doesnt find till last index
        
        if(st.empty() == false)
        {
            highest = st.top();
            st.pop();
        }
        
        while(!st.empty())
        {
            if(st.top() < highest)
            {
                water_traped += highest - st.top();
                st.pop();
            }
            else
            {
                highest = st.top();
                st.pop();
            }
        }
        
        return water_traped;
    }
};
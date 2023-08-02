class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // This logic is learned from youtube 
        int len = heights.size();
        vector<int>LSE(len, -1); // LSE = Left Smaller Element
        vector<int>RSE(len, len); // RSE = Right Smaller Element
        stack<int>st; // stack is making for left and right next smaller ement for each element;
        int max_area = 0;
        
        // Find all left smaller element
        for(int i = len-1; i >= 0; i--)
        {
            while(!st.empty() && heights[st.top()] > heights[i])
            {
                LSE[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        
        // Empty the stack first because of reuse
        while(!st.empty()) st.pop();
        
        // Find all Right smaller element
        for(int i = 0; i < len; i++)
        {
            while(!st.empty() && heights[st.top()] > heights[i])
            {
                RSE[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        
        // Now, find Histogram area, bcz we have LSE AND RSE index for each elemnt of array
        
        for(int i = 0; i < len; i++)
        {
            int temp_area = heights[i] * ((RSE[i] - LSE[i]) -1);
            max_area = max(max_area, temp_area);
        }
        return max_area;
    }
};


// iss q ka logi to mai soach lia tha lakin, jaha atak uska bhi soach lia huu, pur code likhne mai pair wagearh include karna padega so that abhi ke lai skip karta huu ye q.

// #include<bits/stdc++.h>
// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
        
//         // CHIARG CODE (THINK AND SOLVE BY ME)
//         int len = heights.size();
//         pair<int,int>min_element = {INT_MAX,INT_MAX}; //insiliaise pair with -1
//         int max_area = 0;
//         stack<int>st;
        
//         for(int i = len-1; i >= 0; i--)
//         {
//             if(!st.empty() && st.top() < heights[i])
//             {
//                 while(!st.empty())
//                 {
//                     st.pop();
//                 }
                
//                 st.push(heights[i]);
//                 int x = st.top() * st.size();
//                 int temp_area = max(x, max_area);
//                 int temp_area1 = min_element.second + min_element.first;
//                 max_area = max(temp_area, temp_area1);
//             }
                
//             else if(st.empty() || st.top() >= heights[i])
//             {
//                 st.push(heights[i]);
                
//                 // if(heights[i] == min_element.first)
//                 // {
//                 //     int temp_area = (st.top() * st.size()) + min_element.second;
//                 //     max_area = max(temp_area, max_area);
//                 //     min_element.second = max_area;
//                 // }
//                 // cout << st.top() * st.size() << endl;
                
//                 int y = st.top() * st.size();
//                 max_area = max(y, max_area);
//                 if(heights[i] <= min_element.first)
//                 {
//                     int temp_min = min(min_element.first, heights[i]);
//                     int temp_area = (st.top() * (len - i));
//                     max_area = max(temp_area, max_area);
//                     min_element = {temp_min, temp_area};
//                 }  
//             }
//         }
//         return max_area;
//     }
// };
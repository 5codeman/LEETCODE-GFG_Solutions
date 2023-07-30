class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char> st;
        int len = s.size();
        string str;
        
        for(int i = 0; i < len; i++)
        {
            if(!st.empty() && s[i] == st.top()) st.pop();
            
            else st.push(s[i]);            
        }
        
        while(!st.empty())
        {
            str = st.top() + str;
            st.pop();
        }
        return str;
    }
};
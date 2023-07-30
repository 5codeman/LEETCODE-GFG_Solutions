class Solution {
public:
    string decodeString(string s) {
        
        stack<string> st;
        int len = s.size();
        string ans = "";
        
        for(int i = 0; i < len; i++)
        {
            string x = "";
            x += s[i];
            if(s[i] != ']') st.push(x);
            
            else
            {
                string temp = "";
                int nums = 0;
                
                while(st.top() != "[")
                {
                    temp = st.top() + temp;
                    st.pop();
                }
                st.pop();

                string num = "";
                while(!st.empty() && st.top() >= "0" && st.top() <= "9")
                {
                    num = st.top() + num;
                    st.pop();
                }
                int integer = stoi(num);
                
                string temp1 = "";
                for(int j = 0; j < integer; j++)
                {
                    temp1 += temp;
                }
                                
                st.push(temp1);
            }
        }
        
        // Extacting the final decoded string from stack
        while(!st.empty())
        {
            ans = st.top() + ans;
            st.pop();
        }
        
        return ans;
    }
};
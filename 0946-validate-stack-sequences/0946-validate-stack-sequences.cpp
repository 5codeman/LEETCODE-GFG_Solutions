class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int>st;
        int len = pushed.size();
        int len1 = popped.size();
        int index = 0;
        
        for(int i = 0; i < len || index < len1; i++)
        {
            if(st.empty()) st.push(pushed[i]);
            
            else if(st.top() == popped[index])
            {
                while(index < len1 && (!st.empty() && st.top() == popped[index]))
                {
                    st.pop();
                    index++;
                }
                i--;
            }
            else if(i == len && st.top() != popped[index] && index < len1) return false;
            else
            {
                st.push(pushed[i]);
            }
        }
        
        if(st.empty()) return true;
        
        else return false;
    }
};
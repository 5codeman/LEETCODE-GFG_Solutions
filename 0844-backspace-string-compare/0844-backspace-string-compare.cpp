class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        stack<char>s2;
        
        //for string s
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!='#')
            {
                s1.push(s[i]);
            }
            if(s[i]=='#')
            {
                if(!s1.empty())
                {
                    s1.pop();
                }
            }
        }
        
         //for string t
        for(int i=0; i<t.size(); i++)
        {
            if(t[i]!='#')
            {
                s2.push(t[i]);
            }
            if(t[i]=='#')
            {
                if(!s2.empty())
                {
                    s2.pop();
                }
            }
        }
        
        
        // NOW check both stack
        
        if(s1.size()!=s2.size())
        {
            return false;
        }
        
        //else
        while(!s1.empty() && !s2.empty())
        {
            if(s1.top()== s2.top())
            {
                s1.pop();
                s2.pop();
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
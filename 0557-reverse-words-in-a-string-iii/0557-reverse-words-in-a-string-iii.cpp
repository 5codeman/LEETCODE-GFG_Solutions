class Solution {
public:
    string reverseWords(string s) {
        int start_at = 0;
        int end_at = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == ' ')
            {
                end_at = i-1;
                // swaping for reverse string
                while(start_at < end_at)
                {
                    char temp = s[start_at];
                    s[start_at] = s[end_at];
                    s[end_at] = temp;
                    start_at++;
                    end_at--;
                }
                start_at = i+1;
            }
        }
        // for last word/string
        end_at = s.size()-1;
        while(start_at < end_at)
        {
            char temp = s[start_at];
            s[start_at] = s[end_at];
            s[end_at] = temp;
            start_at++;
            end_at--;
        }
        
        return s;
    }
};
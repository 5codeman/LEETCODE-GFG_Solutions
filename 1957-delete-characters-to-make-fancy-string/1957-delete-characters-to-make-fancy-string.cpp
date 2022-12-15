class Solution {
public:
    int check(string s)
    {
        int count = 1;
        for(int i=1; i<3; i++)
        {
            if(s[i-1] == s[i]) count++;
            else count = 1;
        }
        return count;
    }
    string makeFancyString(string s) {
        if(s.size() < 3)
        {
            return s;
        }
        string st;
        for(int i=0; i<s.size()-2; i++)
        {
            int ans = check(s.substr(i,3));
            if(ans < 3) st += s[i];
        }
        st += s[s.size()-2];
        st += s[s.size()-1];
        return st;
    }
};
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>st;
        string temp;
        for(int i=0; i<s.size(); i++)
        {   
            if(s[i] != ' ')
            {
                temp += s[i];
            }
            else
            {
                st.push_back(temp);
                temp.clear();
            }
        }
        st.push_back(temp);
        
        // for map 1
        unordered_map<char, string>map;
        int len = st.size();
        if(pattern.size() != st.size()) return false;
        for(int i=0; i<len; i++)
        {
            if(map.count(pattern[i]) != 0)
            {
                if(map[pattern[i]] != st[i]) return false;
            }
            map[pattern[i]] = st[i];
        }
        // for map2
        unordered_map<string, char>map2;
        for(int i=0; i<len; i++)
        {
            if(map2.count(st[i]) != 0)
            {
                if(map2[st[i]] != pattern[i]) return false;
            }
            map2[st[i]] = pattern[i];
        }
        return true;
    }
};
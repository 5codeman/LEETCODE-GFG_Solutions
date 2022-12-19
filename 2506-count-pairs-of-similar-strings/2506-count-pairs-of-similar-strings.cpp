class Solution {
public:
    int similarPairs(vector<string>& words) {
        unordered_map<string,int>map;
        int count = 0;
        for(int i=0; i<words.size(); i++)
        {
            set<char>st;
            for(int j=0; j<words[i].size(); j++)
            {
                st.insert(words[i][j]);
            }
            string s;
            set<char>::iterator it = st.begin();
            while(it != st.end())
            {
                s += *it;
                it++;
            }
            count += map[s];
            map[s]++;
        }
        return count;
    }
};
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word1.size()) return false;
        set<char>s1,s2;
        vector<int>w1(26,0),w2(26,0);
        
        for(int i=0; i<word1.size(); i++)
        {
            int index = word1[i] - 'a';
            w1[index]++;
            s1.insert(word1[i]);
        }
        
        for(int i=0; i<word2.size(); i++)
        {
            int index = word2[i] - 'a';
            w2[index]++;
            s2.insert(word2[i]);
        }
        
        sort(begin(w1),end(w1));
        sort(begin(w2),end(w2));
        
        return w1==w2&&s1==s2;
    }
};
class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string s;
        int i=0;
        while(i < w1.size() && i < w2.size())
        {
            s.push_back(w1[i]);
            s.push_back(w2[i]);
            i++;
        }
        if(i == w1.size())
        {
            for(int j = i; j < w2.size(); j++) s.push_back(w2[j]);
        }
        else if(i == w2.size())
        {
            for(int j = i; j < w1.size(); j++) s.push_back(w1[j]);
        }
        return s;
    }
};
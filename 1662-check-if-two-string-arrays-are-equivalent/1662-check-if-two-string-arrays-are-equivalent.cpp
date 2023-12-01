class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string wor1, wor2;
        for(int i=0; i<word1.size(); i++)
        {
            wor1 += word1[i];
        }
        for(int i=0; i<word2.size(); i++)
        {
            wor2 += word2[i];
        }
        if(wor1 == wor2) return true;
        
        return false;
    }
};
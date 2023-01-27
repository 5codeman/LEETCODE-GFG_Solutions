class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int> mp1,mp2;
        int count = 0;
        for(string word:words1) mp1[word]++;
        for(string word:words2) mp2[word]++;
        for(string word:words2)
        {
            if(mp1[word] == 1 && mp2[word] == 1) count++;
        }
        return count;
    }
};
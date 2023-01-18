class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int> targetFreq; 
        for(auto a : target) targetFreq[a]++;
        unordered_map<char , int> sentFreq ; 
        for(auto a : s) sentFreq[a]++; 
        int Min = INT_MAX; 
        for(auto a : targetFreq) Min = min(Min, sentFreq[a.first]/a.second); 
        return Min; 
    }
};
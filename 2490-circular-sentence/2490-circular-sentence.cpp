class Solution {
public:
    bool isCircularSentence(string sentence) {
        if(sentence[0] != sentence[sentence.size()-1]) return false;
        int length = sentence.size();
        for(int i=0; i<length; i++)
        {
            if(sentence[i] == ' ' && sentence[i-1] != sentence[i+1]) return false;
        }
        
        return true;
    }
};
class Solution {
public:
    int canBeTypedWords(string text, string broken) {
        
        vector<int> freq(26,0);
        for(int i=0; i<broken.length(); i++) freq[broken[i]-'a']++;
        bool isBroken = false;
        int count = 0;
        for(int i=0; i<text.length(); i++)
        {
            if(text[i]==' ')
            {
                if(!isBroken) count++;
                isBroken=false;       
            }
            else
            {
                if(freq[text[i]-'a'] != 0) isBroken=true;
            }
        }
        if(!isBroken) count++;
        return count;
    }
};
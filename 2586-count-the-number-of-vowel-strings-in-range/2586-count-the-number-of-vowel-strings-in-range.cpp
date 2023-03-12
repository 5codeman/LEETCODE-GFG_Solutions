class Solution {
public:
    //check for first and last char in word
    bool isvowel(char &ch)
    {
        return (ch == 'a' || ch == 'e' || ch=='i' ||ch == 'o' || ch == 'u');
    }
    
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        
        for(int i=left; i<=right; i++)
        {
            int n=words[i].length();
            
            if(isvowel(words[i][0]) && isvowel(words[i][n-1])) count++;
        }
        
        return count;
    }
};
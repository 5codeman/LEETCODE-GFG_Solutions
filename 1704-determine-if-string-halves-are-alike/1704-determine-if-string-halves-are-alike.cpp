class Solution {
public:
    bool isVowel(char &c)
    {   
	return c == 'a' || c == 'e' || c =='i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
    
    bool halvesAreAlike(string s) {
        int mid = s.size()/2;
        int L_ans = 0;
        int R_ans = 0;
        for(int i=0; i<mid; i++)
        {
            L_ans += isVowel(s[i]);
            R_ans += isVowel(s[mid+i]);
        }
        
        return (L_ans == R_ans); 
    }
};
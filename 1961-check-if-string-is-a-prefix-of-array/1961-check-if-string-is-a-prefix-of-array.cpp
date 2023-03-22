class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string check = "";
        for(int i = 0; i < words.size(); i++) 
        {
            check += words[i];
			if(check == s) return true;
            
			if(check.length() >= s.length()) return false;
        }
        return false;
    }
};
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i < words.size(); i++)
        {
            string res = words[i];
            string temp = res;
            
            reverse(temp.begin(),temp.end());
            if(res == temp) return res;
        }
        return "";
    }
};
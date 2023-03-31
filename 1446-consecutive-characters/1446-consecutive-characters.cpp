class Solution {
public:
    int maxPower(string s) 
    {
        int count = 0;
        int maxcount = 0;
        for(int i = 0; i < s.size()-1; i++)
        {
            if(s[i] == s[i+1]) count++;
            
            else 
            {
                maxcount = max(maxcount, count);
                count = 0;
            }
        } 
        maxcount = max(maxcount, count);
        return maxcount+1;
    }
};
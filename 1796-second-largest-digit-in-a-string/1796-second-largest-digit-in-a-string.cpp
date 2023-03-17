class Solution {
public:
    int secondHighest(string s) {
        
        int res[2] = {-1, -1};
        
        for (int i = 0; i < s.size(); i++) 
        {
            if (s[i] >= '0' && s[i] <= '9') 
            {
                s[i] -= '0';
                
                if (s[i] > res[0]) 
                {
                    res[1] = res[0];
                    res[0] = s[i];
                } 
                else if (s[i] != res[0] && s[i] > res[1]) 
                {
                    res[1] = s[i]; 
                }
            }
        }
        return res[1];
    }
};
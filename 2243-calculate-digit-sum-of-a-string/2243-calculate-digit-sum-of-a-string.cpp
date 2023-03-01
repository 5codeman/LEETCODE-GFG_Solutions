class Solution {
public:

string digitSum(string s, int k) {
    string ans;
    while(s.length() > k)
    {
        int sum = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(i != 0 and i % k == 0)
            {
                ans += to_string(sum);
                sum = 0;
            }
            sum += (s[i] - '0');
        }
        
        ans += to_string(sum);
        s = ans;
        ans = "";  
    }
    return s;
    }
};
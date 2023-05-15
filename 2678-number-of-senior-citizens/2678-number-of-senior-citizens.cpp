class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for(auto d: details)
        {
            int age = (d[11] - '0') * 10 + (d[12] - '0');
            if(age > 60) ans++;
        }
        return ans;    
    }
};
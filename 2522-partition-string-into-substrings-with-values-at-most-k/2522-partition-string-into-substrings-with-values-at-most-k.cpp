class Solution {
public:
    int minimumPartition(string s, int k) 
    {
        int cnt = 0;
        long long  num = 0;
        for(int i=0; i<s.length(); i++)
        {
            int digit = s[i]-'0';
            if(digit > k) return -1;                   
            
            num = num*10 + digit;                     
            if(num>k)
            {
                cnt++;
                num = digit;                       
             }
        }
        if(num<=k) cnt++;
        return cnt;
    }
};
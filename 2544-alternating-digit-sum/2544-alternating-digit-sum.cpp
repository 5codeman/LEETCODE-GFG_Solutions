class Solution 
{
public:
    int alternateDigitSum(int n) 
    {
        string s = to_string(n); 
        int sum = 0;
        bool check = true;
        for(int i=0; i<s.size(); i++) 
        {
            if(check)  sum += s[i]-'0'; 
            else sum -= s[i]-'0';
            check = !check;
        }
        return sum;
        
    }
};
class Solution {
public:
    string largestOddNumber(string num) 
    {
        int n=num.size();
        if((num[n-1]-'0')%2 == 1)
        {
            return num;
        }
        while(num.size() != 0 && (num.back()-'0')%2 == 0)
        {
            num.pop_back();
        }
        return num;
    }
};
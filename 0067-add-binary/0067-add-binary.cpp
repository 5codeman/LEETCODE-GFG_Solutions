class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int carry = 0;
        int i=0;
        for(; i<a.size() && i<b.size(); i++)
        {
            int temp = (a[a.size()-1 - i] - 48) + (b[b.size()-1 - i] - 48) + carry;
            string x = to_string(temp);
            if(temp < 2) // for 0 & 1
            {
                ans = x + ans;
                carry = 0;
            }
            else if(temp == 2) // for 2
            {
                ans = '0' + ans;
                carry = 1;
            }
            
            else if(temp == 3) // for 3
            {
                ans = '1' + ans;
                carry = 1;
            }
        }
        
        // if string is left
        if(i == a.size())
        {
            for(int k=a.size(); k<b.size(); k++)
            {
                int temp = (b[b.size()-1 - k] - 48) + carry;
                 string x = to_string(temp);
                if(temp < 2) // for 0 & 1
                {
                    ans = x + ans;
                    carry = 0;
                }
                else if(temp == 2) // for 2
                {
                    ans = '0' + ans;
                    carry = 1;
                }
            }
        }
        
        else
        {
            for(int k=b.size(); k<a.size(); k++)
            {
                int temp = (a[a.size()-1 - k] - 48) + carry;
                 string x = to_string(temp);
                if(temp < 2) // for 0 & 1
                {
                    ans = x + ans;
                    carry = 0;
                }
                else if(temp == 2) // for 2
                {
                    ans = '0' + ans;
                    carry = 1;
                }
            }
        }
        if(carry == 1) // if it hold 1
        {
            ans = '1' + ans;
        }
        return ans;
    }
};
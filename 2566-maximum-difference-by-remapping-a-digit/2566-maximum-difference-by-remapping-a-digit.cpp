class Solution {
public:
    int minMaxDifference(int num) 
    {
        string s = to_string(num);
        string t = s;
        int n=s.size();
        char digit;
        for(int i=0; i<n; i++)
        {
            if(s[i] != '9') 
            {
                digit = s[i];
                s[i] = '9';
                while(i<n) 
                {
                    if(s[i]==digit) s[i]='9';
                    i++;
                }
                break;
            }
        }
        int maxi = stoi(s);
        
        for(int i=0; i<n; i++)
        {
            if(t[i] != '0')
            {
                digit = t[i];
                t[i] = '0';
                while(i<n) 
                {
                    if(t[i]==digit) t[i]='0';
                    i++;
                }
                break;
            }
        }
        int mini = stoi(t);
        return maxi-mini; 
    }
};
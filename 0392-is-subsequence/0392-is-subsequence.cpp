class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_length= s.size();
        int t_length= t.size();
        
        if(s_length==0)
        {
            return true;
        }
        
        else if(t_length==0) //BUT IN S THERE IS SOME ELEMENT.
        {
            return false;
        }
        
        else if(s_length>t_length)
        {
            return false;
        }
        
        int j=0;
        for(int i=0; i<s_length; i++)
        {
            for( ; j<t_length; j++)
            {
                if(s[i]==t[j])
                {
                    break;    
                }
            }
            if(j==t_length)
            {
                return false;
            }
            j++;
        }
        return true;    
    }
};
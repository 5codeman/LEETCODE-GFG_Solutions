class Solution {
public:
    bool detectCapitalUse(string word) {
      int length=word.length();
        int check=0;
        
        for(int i=0;i<length;i++)
        {
            if(97<=word[i] && word[i]<=122)
            {
                check++;
            } 
        }
        
        
        if(check==length) // for all small character
        {
            return true;
        }
        
        else if(check==0) // for all large character
        {
            return true;
        }
        
        else if(check<(length-1)) // if two capital are there
        {
            return false;
        }
        else if(word[0]>=65 && word[0]<=90)
        {
            return true;
        }
        
        else
        {
            return false;
        }

    }
    
};
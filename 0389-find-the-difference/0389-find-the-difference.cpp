class Solution {
public:
    char findTheDifference(string s, string t) {
      int sum_1=0;
        int sum_2=0;
       
        int length1=s.size();
        int length2=t.size();
       
        for(int i=0;i<length1;i++)
        {
            sum_1=sum_1+s[i];
        }
       
        for(int i=0;i<length2;i++)
        {
            sum_2=sum_2+t[i];
        }
       
        char output=sum_2-sum_1;
        return output;
    }
};
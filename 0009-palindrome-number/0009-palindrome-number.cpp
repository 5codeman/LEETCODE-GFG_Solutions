class Solution {
public:
    bool isPalindrome(int x){
    int y=x;
       if(x<0)
       {
           return 0;
       }
    
    double reverse_of_x =0;        
       while(y!=0)
       {
           int n= y%10;
           reverse_of_x=reverse_of_x*10+n;
           y=y/10;
       }
        
        if(reverse_of_x==x)
        {
            return true;
        }
        else
        {
            return false;
        }
       
    }
};
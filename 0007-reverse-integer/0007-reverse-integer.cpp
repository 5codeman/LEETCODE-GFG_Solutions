class Solution {
public:
    int reverse(int x) {
        
        if(x==INT_MIN)
        {
            return 0;
        }
        long ans=0;
        bool check=false;
    
        if(x<0)
        {
            x=x*-1;
            check=true;
        }
        while(x!=0)
        {
            int temp=x%10;
            ans=ans*10+temp;
            x=x/10;
        }
        
        if(ans>INT_MAX)
        {
            return 0;
        }
           
        if(check==true)
        {
            ans=ans*-1;
        }
        
        return ans;
    }
};
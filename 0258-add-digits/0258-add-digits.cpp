class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        int a=0;
        while(num>9)
        {
            while(num!=0)
            {
                a=num%10;
                sum =sum +a;
                num=num/10;
            }
            num=sum;
            sum=0;
        }
        return num;
    }
};
class Solution {
public:
    int largestAltitude(vector<int>& gain) {

    int gain_length=size(gain);
        int check1=0,check2=0;
        for(int i=0;i<gain_length;i++)
        {
            check1=gain[i]+check1;
            if(check1>check2)
            {
                check2=check1;
            }
        }
        return check2;
    }
};


class Solution {
public:
    int bestClosingTime(string customers) {
        // Count Y
        int count_y = 0;
        int count_N = 0;
        for(int i=0; i<customers.size(); i++)
        {
            if(customers[i] == 'Y')
            {
                count_y++;
            }
        }
        int index = 0;
        int penalty = INT_MAX;
        for(int i=0; i<customers.size(); i++)
        {
            int x = count_y + count_N;
            if(x < penalty)
            {
                index = i;
                penalty = x;
            }
            if(customers[i] == 'Y') count_y--;
            else count_N++; 
        }
        
        // for last INDEX
        int x = count_y + count_N;
        if(x < penalty)
        {
            index = customers.size();
            penalty = x;
        }
        return index;
    }
};
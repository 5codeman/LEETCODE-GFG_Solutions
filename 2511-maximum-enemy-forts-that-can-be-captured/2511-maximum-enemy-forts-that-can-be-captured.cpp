class Solution {
public:
    int captureForts(vector<int>& forts) {
        int st_in = 0;
        int max_cap = 0;
        int search = 0;
        for(int i=0; i<forts.size(); i++)
        {
            if(forts[i] == 1 || forts[i] == -1)
            {
                if(forts[i] == search)
                {
                    int index = (i-1) - st_in;
                    max_cap = max(max_cap, index);
                }
                st_in = i;
                search = -1 * forts[i];
            }
        }
        return max_cap;
    }
};
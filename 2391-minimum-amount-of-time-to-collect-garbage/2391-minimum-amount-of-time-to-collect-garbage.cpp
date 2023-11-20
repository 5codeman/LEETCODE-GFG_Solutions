class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        // iska aacha tarika dekhna kya hoga
        int M=0,P=0,G=0;
        int MI=0,PI=0,GI=0;
        int Total_min = 0;
        for(int i=0; i<garbage.size(); i++)
        {
            for(int j=0; j<garbage[i].size(); j++)
            {
                if(garbage[i][j] == 'M')
                {
                    M++;
                    MI=i;
                }
                else if(garbage[i][j] == 'P')
                {
                    P++;
                    PI=i;
                }
                else
                {
                    G++;
                    GI=i;
                }
            }
        }
        // 1 Truck
        for(int i=0; i<MI; i++) // sara 3 no loop 1 kum chalega 
        {
            Total_min += travel[i];
        }
        // 2 TRUCK
        for(int i=0; i<PI; i++)
        {
            Total_min += travel[i];
        }
        // 3 TRUCK
        for(int i=0; i<GI; i++)
        {
            Total_min += travel[i];
        }
        
        return Total_min + M + P + G;
    }
};
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int Max = 0;
        int count_same = 0;
        int Min_time = 0;
        int i=0;
        for(; i<colors.size()-1; i++)
        {
            if(colors[i] == colors[i+1])
            {
                count_same += neededTime[i];
                Max = max(neededTime[i], Max);
            }
            else
            {
                count_same += neededTime[i];
                Max = max(neededTime[i], Max);
                Min_time += (count_same - Max);
                count_same = 0;
                Max = 0;
            }
        }
        // for last index
        count_same += neededTime[i];
        Max = max(neededTime[i], Max);
        Min_time += (count_same - Max);
        return Min_time;
    }
};
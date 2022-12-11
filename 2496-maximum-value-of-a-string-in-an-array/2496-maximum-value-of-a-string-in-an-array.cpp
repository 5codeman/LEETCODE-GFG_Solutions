#include<bits/stdc++.h>
class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int Max = 0;
        int i=0;
        for(; i<strs.size(); i++)
        {
            int j=0;
            for(; j<strs[i].size(); j++)
            {
                if(strs[i][j] >= 'a' && strs[i][j] <= 'z')
                {
                    int size = strs[i].size();
                    Max = max(Max, size);
                    break;
                }
            }
            
            if(j == strs[i].size())
            {
                int x = stoi(strs[i]);
                Max = max(Max, x);
            }
        }
        return Max;
    }
};
#include<vector>
#include<map>
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int> map;
        int count = 0;
        // key inset in map row wise
        for(int i=0; i<grid.size(); i++)
        {
            vector<int>arr;
            for(int j=0; j<grid[0].size(); j++)
            {
                arr.push_back(grid[i][j]);
            }
            
            if(map.count(arr) == 1)
            {
                map.at(arr)++;
            }
            else
            {
                map[arr] = 1;
            }
        }
        
        //Check key column wise
        for(int i=0; i<grid[0].size(); i++)
        {
            vector<int>arr;
            for(int j=0; j<grid.size(); j++)
            {
                arr.push_back(grid[j][i]);
            }
            
            if(map.count(arr) == 1)
            {
                int value = map.at(arr);
                count += value; //*1 is applicable
            }
        }
        return count;
    }
};
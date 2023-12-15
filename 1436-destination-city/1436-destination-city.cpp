#include<unordered_map>
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        
        //Frequency se bhi ker shakte hai
        int row=paths.size();
        unordered_map<string, int>map;
        
        for(int i=0; i<row; i++)
        {
            map[paths[i][0]]=1;
        }
        
        for(int i=0; i<row; i++)
        {
            if(map.count(paths[i][1])==0)
            {
                return paths[i][1];
            }
        }
        return paths[0][0];//dummy return
    }
};
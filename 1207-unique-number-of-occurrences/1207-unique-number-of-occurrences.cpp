#include<unordered_map>
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());     
        unordered_map<int, int>map;
        int count = 1;
        for(int i=0; i<arr.size()-1; i++)
        {
           if(arr[i] == arr[i+1])
           {
               count++;
           }
            else
            {
                if(map.count(count) > 0)
                {
                    return false;
                }
                else
                {
                    map[count];
                }
                count = 1;
            }
        }
        if(map.count(count) > 0)
        {
            return false;
        }
        return true;
    }
};
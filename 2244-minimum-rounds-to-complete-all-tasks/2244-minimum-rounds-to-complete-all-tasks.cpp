class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> map;
        for(int i=0;i<tasks.size();i++)
        {
            map[tasks[i]]++;
        }
        int output=0;
        
        unordered_map<int,int>::iterator freq = map.begin();
        while(freq != map.end())
        {
            if(freq->second==1) return -1;
            
            if(freq->second%3==0) output += freq->second/3;
            else output += freq->second/3 + 1;
            freq++;
        }
        return output;
    }
};
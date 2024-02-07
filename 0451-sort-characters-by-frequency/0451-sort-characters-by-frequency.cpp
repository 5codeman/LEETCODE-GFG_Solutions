#include<unordered_map>
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>map;
        // FILL IN MAP
        for(int i=0; i<s.size(); i++)
        {
            if(map.count(s[i])!=0)
            {
                map[s[i]]++;
            }
            else
            {
                map[s[i]] = 1;
            }
        }
        string ans;
        pair<int,char>p;
        priority_queue<pair<int,char>>pq;
        
        // ITRATE MAP
        unordered_map<char,int>::iterator it = map.begin();
        while(it!=map.end())
        {
            p.first  = it->second; // VALUE
            p.second = it->first;  // KEY
            pq.push(p);
            it++;
        }
        
        //  make string
        while(pq.size()!=0)
        {
            pair<int,char>temp = pq.top();
            for(int i=0; i<temp.first; i++) // Run til character frequency
            {
                ans += temp.second;
            }
            pq.pop();
        }
        return ans;
    }
};
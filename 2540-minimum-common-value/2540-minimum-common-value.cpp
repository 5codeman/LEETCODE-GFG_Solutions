class Solution {
public:
    int getCommon(vector<int>& n1, vector<int>& n2) {
        
        map<int,int> mp;
        for( auto it : n1 ) mp[it]++;
        
        for( auto it : n2 )
        {
            if( mp.find(it) != mp.end() ) return it;
        }
        return -1;
    }
};
class Solution {
public:
    bool isAnagram(string s, string t) {
        // we cam also do this q by hash table or hashmap here TC is good but space is bad
        //this time we solve this q using Sorting here TC is bad but SC is good
        
        if(s.size() != t.size())
        {
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] != t[i])
            {
                return false;
            }
        }
        return true;
    }
};
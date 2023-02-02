class Solution {
public:
    unordered_map<char, int> mp;
    bool isAlienSorted(vector<string>& words, string order) { 
        
	for(int i = 0; i < order.size(); i++) mp[order[i]] = i; 
	for(int i = 0; i < words.size()-1; i++)
    {
        if(!checkOrder(words[i], words[i + 1])) return false;
    }
	return true;        
}

bool checkOrder(string& a, string& b)
{
	int i = -1;
	while(++i < a.size() && i < b.size())
    {
        if(mp[a[i]] != mp[b[i]]) return mp[a[i]] < mp[b[i]];
    }
	return size(a) <= size(b);
        
    }
};
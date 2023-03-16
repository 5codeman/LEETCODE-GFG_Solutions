class Solution {
public:
    int minimumMoves(string s) {
	int i = 0, n = s.length();
    int count = 0;
	while (i < n) 
    {
		if (s[i] == 'O')  i++;
		else count++, i += 3; 
	}
	return count;        
    }
};
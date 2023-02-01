class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
	for(int i = left; i <= right; i++) 
    {
		bool seen = false;
		for(int j = 0; j < size(ranges) && !seen; j++) 
			if(i >= ranges[j][0] && i <= ranges[j][1]) 
				seen = true;
		if(!seen) return false;
	}
	return true;    
    }
};
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
    int n = spells.size(), m = potions.size();   
    sort(potions.begin(), potions.end());
    vector<int> pairs(n);
    for(int i = 0; i < n; i++)
    {
        int l = 0, r = m - 1;
        while(l <= r)
        {
            int mid = (l + r) / 2;
            if((long long)spells[i] * (long long)potions[mid] >= success)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
            pairs[i] = m - 1 - r;
        }
        return pairs;
    }
};
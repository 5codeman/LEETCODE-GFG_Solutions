class Solution {
public:
    long long dividePlayers(vector<int>& skill) {     
        sort(skill.begin(), skill.end());
        int mid = skill.size()/2;
        int j = skill.size()-1;
        int sum= skill[0] + skill[j];
        long long chemistry = 0;
        
        for(int i=0; i<mid; i++, j--)
        {
            if(skill[i] + skill[j] == sum)
            {
                chemistry += (skill[i] * skill[j]);
            }
            else
            {
                return -1;
            }
        }
        return chemistry;
    }
};
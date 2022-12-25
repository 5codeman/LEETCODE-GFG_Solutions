class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        // Viivek approach // i think diff approach and also like vivek(but don't knoe how to code)
        int size = words.size();
        int R_dist = 1;
        int L_dist = size-1;
        int dist = INT_MAX;
        if(words[startIndex] == target) return 0;
        for(int i = startIndex+1; (i % size) != startIndex; i++)
        {
            if(words[i%size] == target)
            {
                dist = min(dist, min(L_dist, R_dist));
            }
            R_dist++;
            L_dist--;
        }
        if(dist == INT_MAX) return -1;
        return dist;
    }
};
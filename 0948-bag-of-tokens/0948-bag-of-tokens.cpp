class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score = 0;
        sort(tokens.begin(),tokens.end());
        int i = 0;
        int j = tokens.size()-1;
        while(i <= j)
        {
            // FACE UP CARD
            if(tokens[i] <= power)
            {
                power -= tokens[i];
                score++;
                i++;
            }
            // FACE DOWN CARD 
            else if(score >= 1 && i!=j)
            {
                power += tokens[j];
                score--;
                j--;
            }
            //if we not play game with given rule
            else
            {
                break;
            }
        }
        return score;
    }
};
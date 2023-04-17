class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int length=candies.size();
        int highest_candies=0;
        for(int i=0;i<length;i++)
        {
            if(highest_candies<candies[i])
            {
                highest_candies=candies[i];
            }
        }
        
        bool output[length];
        
        for(int i=0;i<length;i++)
        {
            if(highest_candies<=extraCandies+candies[i])
            {
                output[i]=true;
            }
            else
            {
                output[i]=false;
            }
        }
        
        vector<bool>result(output,output+length);
            return result;
    }
};
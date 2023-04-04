class Solution {
public:
    int partitionString(string s) {
        vector<int>arr(26,0);
        int count = 0;
        for(int i=0; i<s.size(); i++)
        {
            int index = s[i] - 'a';
            if(arr[index] == 0) arr[index]++;
            
            else
            {
                fill_n(arr.begin(),26, 0); // fill_n is a inbuilt ftn which fill vector with 0 again
                count++;
                i--;
            }
        }
        return count+1; // +1 for last sub_string
    }
};
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int arr[26];
        string s1 = "qwertyuiop";
        string s2 = "asdfghjkl";
        string s3 = "zxcvbnm";
        for(int i=0; i<10; i++)
        {
            int index = s1[i] -'a';
            arr[index] = 1;
        }
        for(int i=0; i<9; i++)
        {
            int index = s2[i] -'a';
            arr[index] = 2;
        }
        for(int i=0; i<7; i++)
        {
            int index = s3[i] -'a';
            arr[index] = 3;
        }
        
        vector<string>ans;
        for(int i=0; i<words.size(); i++)
        {
            // Find out first char row
            int check = 0;
            if(words[i][0]>=97) // small char
            {
                int index = words[i][0] -'a';
                check = arr[index];
            }
            else
            {
                int index = words[i][0] + 32 -'a';
                check = arr[index];
            }
            // work for rest word
            int j=1;
            for(; j<words[i].size(); j++)
            {
                if(words[i][j]>=97) // small char
                {
                    int index = words[i][j] -'a';
                    if(check != arr[index]) break;
                }
                else
                {
                    int index = words[i][j] + 32 -'a';
                    if(check != arr[index]) break;
                }
            }
            if(j == words[i].size())
            {
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};
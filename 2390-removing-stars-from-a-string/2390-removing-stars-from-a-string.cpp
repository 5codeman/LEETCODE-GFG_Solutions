class Solution {
public:
    
    // Ye Q stack se bhi ho jayega aur 2 pointer se bhi dhung se dono approach sochna nd solution dekhna
    // given string ko bhi as a stack use ker shakte hai
    string removeStars(string s) {
        string ans = "";
        int count = 0;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i] == '*')
            {
                count++;
            }
            else
            {
                if(count > 0)
                {
                    count --;
                }
                else
                {
                    ans += s[i]; //+ ans;  // ans = s[i]+ans; karne memory limit exceeded aaya kyu think
                    
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

/* COMPLEXITY
-> TC = O(N)
-> SC = O(N)
*/

// Direct aise index - nahi hoga
                // i = i - count;
                // if(i>=0) // Position/ index Should be in range
                // {
                //     ans = s[i] + ans;
                // }
                // count = 0;
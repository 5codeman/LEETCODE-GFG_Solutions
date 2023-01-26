class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int i,n=spaces.size(),m=s.size(),j;
        string ans="";
        i=0;
        j=0;
        
        while(i<m)
        {
            if(j<n && i==spaces[j])
            {
                ans+=" ";
                j++;
            }
            ans+=s[i];
            i++;
        } 
        return ans;
    }
};
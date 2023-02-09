class Solution {
public:
    bool areNumbersAscending(string s) {
        int n = s.size();
        vector<int> nums; 
        int i;
        for(i=0; i<n; i++)
        {
            if(isdigit(s[i]))
            {
                string temp; 
                while(i<n && isdigit(s[i])) temp += s[i++];
                nums.push_back(stoi(temp)); 
            }            
        }
        for(i=0; i<nums.size()-1; i++)
        {
            if(nums[i] >= nums[i+1]) return false;
        }
        return true;
    }
};
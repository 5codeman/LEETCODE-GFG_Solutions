class Solution {
public:
    // chirag code 
    
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s1;
        int j=0;
        for(int i=0;i<pushed.size();i++)
        {
            s1.push(pushed[i]);
            if(s1.top()==popped[j])
            {
                s1.pop();
                j++;
                while( s1.size()!=0 && s1.top()==popped[j]) // vivek ne batay ye line
                {
                    s1.pop();
                    j++;
                }
            }
        }
        
        while(s1.size()!=0 && j<popped.size())
        {
            if(s1.top()==popped[j])
            {
                s1.pop();
                j++;
            }
            else
            {
                break;
            }
        }
        
        
        if(s1.size()==0)
        {
            return true;
        }
        return false;
    }
};
class Solution {
public:
    bool rotateString(string s, string goal) {
       if(s.size() != goal.size()) return false;
        
       if(s == goal) return true;
        
       goal = goal + goal;
        
       int find = goal.find(s);
        
       if(goal.size() >= find) return true;
        
       return false;
    }
};
class Solution {
public:
    int fillCups(vector<int>& amount) {
      int x = amount[0];
      int y = amount[1];
      int z = amount[2];
      int sum = x + y + z;
      int MAX = max(max(x,y),z);
      int sec = (sum / 2) + (sum % 2);
      if(MAX > sec) return MAX;
      else return sec;
    }
};
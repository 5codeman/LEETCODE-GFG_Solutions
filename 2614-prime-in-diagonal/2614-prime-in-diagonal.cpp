class Solution {
public:
    bool isPrime(int n)
    {
      if(n <= 1) return false; 
      for (int i = 2; i * i <= n; i++) if (n % i == 0)return false;
      return true;
    }
    
    int diagonalPrime(vector<vector<int>>& v)
    {
      int n = v.size(), ans = INT_MIN;
      for(int i = 0; i < n; i++)
      {
        if(isPrime(v[i][i])) ans = max(ans, v[i][i]);
        if(isPrime(v[i][n - i - 1])) ans = max(ans, v[i][n - i - 1]);
      }
      return ans == INT_MIN ? 0 : ans;
    }
};
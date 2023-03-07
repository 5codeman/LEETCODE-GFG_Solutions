class Solution {
public:
    int largestInteger(int num) {
        vector<int>temp;
        int x = num;
        while(x > 0)
        {
            int y = x % 10;
            temp.push_back(y);
            x = x / 10;
        }
        reverse(temp.begin(), temp.end());
        int n = temp.size();
        for(int i=0; i<n; i++)
        {
            int curr = temp[i];
            int p = curr % 2;
            int j = i+1;
            while(j < n)
            {
                if(temp[j] > temp[i] and temp[j] % 2 == p) swap(temp[j], temp[i]);
                j++;
            }
        }
        long long int res = 0;
        for(int i=0; i<temp.size(); i++)
        {
            res *= 10;
            res += temp[i];
        }
        return res;
    }
};
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>s1;
        int size = temperatures.size();
        vector<int>arr(size,0);
        for(int i=size-1; i>=0; i--)
        {
            while(!s1.empty())
            {
                int Top = s1.top();
                if(temperatures[i] >= temperatures[Top])
                {
                    s1.pop();
                    arr[i] = 0;
                }
                else
                {
                    arr[i] = Top - i;
                    break;
                }
            }
            s1.push(i);
        }
        return arr;
    }
};
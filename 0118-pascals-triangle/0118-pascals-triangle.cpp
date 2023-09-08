class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        vector<int>temp;
        temp.push_back(1);
        pascal.push_back(temp);
        
        for(int i=1; i<numRows; i++)
        {
            vector<int>temp1;
            temp1.push_back(1);
            int k=0;
            for(int j=2; j<=i; j++)
            {
                int temp=pascal[i-1][k]+pascal[i-1][k+1];
                temp1.push_back(temp);
                k++;
            }
            temp1.push_back(1);
            pascal.push_back(temp1);
        }
        return pascal;
    }
};
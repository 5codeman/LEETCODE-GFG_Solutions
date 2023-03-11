class Solution 
{
public:
    long long coloredCells(int n) 
    {
        long long cells=1, face=4;
        for(int i=2; i<=n; i++)
        {
            cells += (i-1)*face;
        }
        return cells;
    }
};
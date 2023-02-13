class Solution {
public:
    int countOdds(int low, int high) {
        int totalNo = (high - low+1);
        if(totalNo % 2 == 0) return totalNo/2; // if totalNo is even times means (No_of_even == No_of_odd).
        else if(low%2 == 0) return totalNo/2;
        return (totalNo/2)+1;
    }
};
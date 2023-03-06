class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int search = 1;
        int missing = 0;
        int index = 0;
        int len = arr.size();
        while(missing < k && index < len)
        {
            if(arr[index] == search) 
            {
                index++;
                search++;
            }
            else
            {
                missing++;
                search++;
            }
        }
        if(missing < k) return (search-1) + (k - missing);
        return search-1;
    }
};
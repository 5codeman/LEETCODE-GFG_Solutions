//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    long long int totalFine(int n, int date, int car[], int fine[])
    {
        long long int total_fine = 0;
        if(date % 2 == 0) 
        {
            for(int i = 0; i < n; i++)
            {
                if(car[i] % 2 != 0) total_fine += fine[i];
            }
        }
        else
        {
            for(int i = 0; i < n; i++)
            {
                if(car[i] % 2 == 0) total_fine += fine[i];
            }
        }
        return total_fine;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, date;
        cin >> n >> date;
        int car[n], fine[n];
        
        for (i = 0; i < n; i++){
            cin >> car[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> fine[i];
        }
        Solution obj;
        cout << obj.totalFine(n, date, car, fine) << endl;
    }
    return 0;
}

// } Driver Code Ends
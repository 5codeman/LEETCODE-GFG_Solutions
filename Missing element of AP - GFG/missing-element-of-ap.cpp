//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMissing(int arr[], int n) {
        // code here
        int start = 0;
        int end = n - 1;
        int d = (arr[end] - arr[start]) / n; // d is calculated by an formulla.
        while(start <= end)
        {
            int mid = (start + end) / 2;
            int length = (end) - mid;
            if(arr[mid] + d != arr[mid+1]) return arr[mid] + d;
            if(arr[mid] - d != arr[mid-1]) return arr[mid] - d;
            
            else if(arr[mid] + (length * d) != arr[end]) start = mid + 1;
            
            else end = mid - 1;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMissing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
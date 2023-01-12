//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int minimizeSum(int N, vector<int> arr) {
        // code here
        priority_queue<int, vector<int>, greater<int>>pq;
        
        for(int i=0; i<N; i++) pq.push(arr[i]);
        
        int sum=0;
        while(pq.size()>1)
        {
            int num=pq.top();
            pq.pop();
            num += pq.top();
            pq.pop();
            sum += num;
            pq.push(num);
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minimizeSum(n, arr) << "\n";
    }
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        vector<int>ans;
        if(s == 0) 
        {
            ans.push_back(-1);
            return ans;
        }
        
        int left = 1;
        long long curr_sum = 0;
        
        for(int i = 0; i < n; i++)
        {
            curr_sum += arr[i];
            while(curr_sum > s)
            {
                curr_sum -= arr[left - 1];
                left++;
            }
            if(curr_sum == s)
            {
                ans.push_back(left);
                ans.push_back(i + 1);
                return ans;
            }
        }
        ans.push_back(-1);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int N, int X)
    {
        // Your code here
        for(int i = 0; i < N; i++)
        {
            if(arr[i] == X) return i;
        }
        return -1;
    }

};
// Array is not sorted so, we dont use binary search:

// int start = 0;
//         int end = N-1;
//         while(start <= end)
//         {
//             int mid = (start + end) / 2;
//             if(arr[mid] == X) return mid;
            
//             else if(arr[mid] > X) end = mid - 1;
            
//             else start = mid + 1;
//         }
//         return -1;

//{ Driver Code Starts.

int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        int x;
        
        for(int i=0;i<sizeOfArray;i++)
        {
            cin>>arr[i];
        }
        cin>>x;
        Solution ob;
        cout<<ob.search(arr,sizeOfArray,x)<<endl; //Linear search
    }

    return 0;
    
}

// } Driver Code Ends
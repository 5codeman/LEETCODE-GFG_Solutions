class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>&a, vector<int>&b) {
        int n = a.size();
        vector<int>vis(n+1,0); // creating a visited array
        vector<int>c; // ans array
        int count=0;
        for(int i=0; i<n; i++){
            if(a[i]==b[i]){
                count++;
                vis[a[i]]=1;
                c.push_back(count);
            }
            else if(a[i]!=b[i]){
                if(vis[a[i]]==1)count++;
                if(vis[b[i]]==1)count++;
                vis[a[i]]=1;
                vis[b[i]]=1;
                c.push_back(count);
            }
        }
        return c;
    }
};
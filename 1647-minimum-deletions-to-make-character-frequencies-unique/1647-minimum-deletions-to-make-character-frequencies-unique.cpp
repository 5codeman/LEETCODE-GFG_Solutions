class Solution {
public:
    int minDeletions(string s) {
        //hash map & priorityquueue se baad mai karna
        
        vector<int>arr(26, 0); //(size, value)
        int count=0;
        
        //Store Frequency
        for(int i=0; i<s.size(); i++)
        {
            arr[s[i]-'a']++;
        }
        
        //sort frequency
        sort(arr.begin(),arr.end());
        
        for(int i=arr.size()-1; i>0; i--)
        {
            if(arr[i]==0)  //sorted islia 
            {
                //"bbcebab" ispe aatak gaya //(ispe bhi sochna)//vivek think this
                int j=i-1;
                while(j!=0 && arr[j]!=0)
                {
                    count += arr[j];
                    arr[j]=0;// NOT imp
                    j--;
                }
                break;
            }
            if(arr[i-1]>arr[i])  // ye test case aatka tha ("abcabc")is karan se ye laga
            {
                count += arr[i-1]-arr[i]+1;//ispe socchna 
                arr[i-1]=arr[i]-1;
            }
            else if(arr[i]==arr[i-1]) // && deke 0 ka condition bhi de shakte hai
            {
                count++;
                arr[i-1]--;//reduce frequency
            }
        }
        return count;
    }
};
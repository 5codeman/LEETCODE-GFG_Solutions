// COMPARITOR
bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first==b.first)return a.second<b.second; //return true false
    return a.first>b.first; //return true false

}

class Solution {
public:
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
        
        unordered_map<string, int>map;
        vector<pair<int,int>>arr;
        
        // put feedback in map
        for(int i=0; i<positive_feedback.size(); i++)
        {
            map[positive_feedback[i]] = 3;
        }
        for(int i=0; i<negative_feedback.size(); i++)
        {
            map[negative_feedback[i]] = -1;
        }
        
        for(int i=0; i<report.size(); i++)
        {
            string temp;
            pair<int, int>pr;
            for(int j=0; j<report[i].size(); j++)
            {
                if(report[i][j] != ' ')
                {
                    temp += report[i][j];
                }
                else
                {
                    pr.first += map[temp];
                    temp.clear();
                }
            }
            // for last word
            pr.first += map[temp];
            // For all
            pr.second = student_id[i];
            arr.push_back(pr);
        }
        
        sort(arr.begin(), arr.end(), cmp);
        // find top k
        vector<int>ans;
        for(int i=0; i<k; i++)
        {
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       
/*vivek wale approach se bhi try karna approach-: CHECK 0 TH INDEX + LAST INDEX IF UNDER LIMIT COUNT ++ AND  J++ BOTH OTHERWISE ONLY COUNT ++ AND I--(ALWAYS IN LOOP)*/
       
        //chirag code
        int length = people.size();
        sort(people.begin(), people.end());
        int count_boat = 0;
        int j = 0;
        for(int i = length-1; i >= 0 && people[i] > 0 ; i--)
        {
            if(people[i] == limit)
            {
                count_boat++;
                people[i] = 0;
            }
            else
            {
                int temp = limit - people[i];
                if(people[j] <= temp)
                {
                    count_boat++;
                    people[j]=0;
                    people[i]=0;
                    j++;
                }
                else
                {
                    count_boat++;
                    people[i]=0;
                }
            }
        }
        return count_boat;
    }
};
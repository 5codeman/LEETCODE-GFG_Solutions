class Solution {
public:
	int countCharacters(vector<string>& words, string chars) 
    {	
		vector<int> charfrequency(26,0);
		bool canform = true;
		int count = 0;
		for(char &ch:chars) 
        {
			charfrequency[ch-'a']++;
		}
		for(auto &word:words)
        {
			vector<int> wordfrequency(26,0);
			for(auto &ch:word)
            {
				wordfrequency[ch-'a']++;
			}
			for(int i = 0;i<charfrequency.size();i++)
            {
				if(wordfrequency[i] > charfrequency[i])
                {
					canform = false;
					break;
				}
				else canform = true;
			}
			if(canform) count += word.length();
		}
		return count;    
	}
};
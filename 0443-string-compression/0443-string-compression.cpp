class Solution {
public:

int compress(vector<char>& chars) {
    
	int count_= 1;
    string ans;
	
    for(int i=0; i<chars.size(); i++)
    {
        while(i<chars.size()-1 && chars[i] == chars[i+1])
        {
            count_++;
            i++;
        }
        ans += chars[i];
        if(count_ == 1)
        {
            continue;
        }
        ans += to_string(count_);
        count_ = 1;
    }
    
     chars.clear();
    
     for(int i=0;i<ans.size();i++)
     {
          chars.push_back(ans[i]);
     } 
 
    return chars.size();
}
};
class Solution {
public:
  string reformatNumber(string number) {
      // understand but take this soln from f=discuss section
    string answer; 
    int k = 0;
    
    for(int i=0; i<number.size(); i++)
    {                       
      if(number[i] == ' ' || number[i] == '-') continue;
        
      else answer.push_back(number[i]);
        
      if(++k == 3) answer.push_back('-'), k = 0;  
    }
    
    if(k == 1) swap(answer[answer.size()-2], answer[answer.size()-3]); 
      
    else if (k == 0) answer.pop_back();                       
      
    return answer;
  }
};
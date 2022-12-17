class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long>RPN;
        int len = tokens.size();
        for(int i=0; i<len; i++)
        {
            if(tokens[i] == "+")
            {
                long long x = RPN.top();
                RPN.pop();
                long long y = RPN.top();
                RPN.pop();
                RPN.push(x + y);
            }
            else if(tokens[i] == "-")
            {
                long long x = RPN.top();
                RPN.pop();
                long long y = RPN.top();
                RPN.pop();
                RPN.push(y - x);
            }
            else if(tokens[i] == "*")
            {
                long long x = RPN.top();
                RPN.pop();
                long long y = RPN.top();
                RPN.pop();
                RPN.push(x * y);
            }
            else if(tokens[i] == "/")
            {
                long long x = RPN.top();
                RPN.pop();
                long long y = RPN.top();
                RPN.pop();
                RPN.push(y / x);
            }
            else
            {
                long long element = stoi(tokens[i]);
                RPN.push(element);
            }
        }
        return RPN.top();
    }
};
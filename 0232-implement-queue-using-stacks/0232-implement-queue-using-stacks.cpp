#include<stack>
class MyQueue {
private:
    stack<int>in;
    stack<int>op;
public:
    MyQueue() {
        
    }
    void push(int x) {
        in.push(x);
    }
    
    int pop() {
        if(!op.empty())
        {
            int x = op.top();
            op.pop();
            return x;
        }
        else
        {
            while(!in.empty())
            {
                op.push(in.top());
                in.pop();
            }
            int x = op.top();
            op.pop();
            return x;
        }
    }
    
    int peek() {
        if(!op.empty())
        {
            int x = op.top();
            return x;
        }
        else
        {
            while(!in.empty())
            {
                op.push(in.top());
                in.pop();
            }
            int x = op.top();
            return x;
        }  
    }
    
    bool empty() {
        if(in.empty()  && op.empty()) return true;
        
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
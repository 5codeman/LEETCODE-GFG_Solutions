#include<bits/stdc++.h>
class MinStack {
    
private:
    int Top;
    vector<int>arr;
    vector<int>Min;
    int Min_index;
    
public:
    MinStack() {
        Top = -1;
        Min.push_back(INT_MAX); //insert at 0 index
        Min_index = 0;
    }
    
    void push(int val) {
        int temp = min(Min[Min_index], val);
        Min.push_back(temp);
        Min_index++;
        Top++;
        arr.push_back(val);
    }
    
    void pop() {
        Min.pop_back();
        Min_index--;
        arr.pop_back();
        Top--;
    }
    
    int top() {
        return arr[Top];
    }
    
    int getMin() {
        return Min[Min_index];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
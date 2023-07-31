class StockSpanner {
    
private:
    stack<pair<int,int>>st;
    int span;

public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        span = 1;

        while(!st.empty() && st.top().first <= price)
        {
            span += st.top().second;
            st.pop();
        }
        
        pair<int,int> pr;
        pr.first = price;
        pr.second = span;
        st.push(pr);
        
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
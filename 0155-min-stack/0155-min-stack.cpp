class MinStack {
public:
    stack<pair<int, int>> ans;
    
    void push(int val) {
        ans.push({val, ans.empty() ? val : min(val, ans.top().second)});
    }
    
    void pop() {
        ans.pop();
    }
    
    int top() {
        return ans.top().first;
    }
    
    int getMin() {
        return ans.top().second;
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

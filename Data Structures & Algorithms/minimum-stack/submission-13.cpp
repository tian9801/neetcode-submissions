class MinStack {
public:
    std::stack<int> sstack;
    std::stack<int> minStack;
    MinStack() {
        
    }
    
    void push(int val) {
        if (sstack.empty() || val <= sstack.top()){
            sstack.push(val);
        }
        minStack.push(val);

    }
    
    void pop() {
        if (minStack.top() == sstack.top()) {
            sstack.pop();
        }
        minStack.pop();
    }
    
    int top() {
        return minStack.top();
    }
    
    int getMin() {
        if (!sstack.empty() && !minStack.empty()) {
            return sstack.top();
        }
        return 0;
    }
};

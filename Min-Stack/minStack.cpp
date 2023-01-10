class MinStack {
public:
    vector<int> stack;
    vector<int> minStack;
    MinStack() {
        
    }
    
    void push(int val) {
        stack.push_back(val);
        if (minStack.size() == 0)
            minStack.push_back(val);
        else {
            minStack.push_back(min(val, minStack.back()));
        }
        
    }
    
    void pop() {
        stack.pop_back();
        minStack.pop_back();
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
        return minStack.back();
    }
};

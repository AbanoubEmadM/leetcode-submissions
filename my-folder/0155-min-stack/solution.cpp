class MinStack {
public:
    stack<int> main;
    stack<int> temp;

    MinStack() {
        
    }
    
    void push(int val) {
        main.push(val);
        if (temp.empty()) {
            temp.push(val);
        }
        else { 
            temp.push(min(temp.top(), val));
        }
    }
    
    void pop() {
        main.pop();
     temp.pop();
    }
    
    int top() {
        return main.top();
    }
    
    int getMin() {
        return temp.top();
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

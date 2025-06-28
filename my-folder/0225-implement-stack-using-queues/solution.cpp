class MyStack {
public:
    deque<int> deq;
    queue<int> del;
    MyStack() {
    }
    
    void push(int x) {
        deq.push_back(x);
    }
    
    int pop() {
        del.push(deq.back());
        deq.pop_back();
        return del.back();
    }
    
    int top() {
        return deq.back();
    }
    
    bool empty() {
        return !deq.size();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

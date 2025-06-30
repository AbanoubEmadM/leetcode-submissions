class MyCircularDeque {
public:
    deque<int> dq;
    int n;
    MyCircularDeque(int k) {
        n=k;
    } 
    
    bool insertFront(int value) {
        if (dq.size() < n){
            dq.push_front(value);
            return true;
        }
        return false;
    }
    
    bool insertLast(int value) {
        if (dq.size() < n){
            dq.push_back(value);
            return true;
        }
        return false;
    }
    
    bool deleteFront() {
        if (!dq.empty()){
            dq.pop_front();
            return true;
        }
        return false;

    }
    
    bool deleteLast() {
        if (!dq.empty()){
            dq.pop_back();
            return true;
        }
        return false;

    }
    
    int getFront() {
        return !dq.empty() ? dq.front() : -1;
    }
    
    int getRear() {
        return !dq.empty() ? dq.back() : -1;
    }
    
    bool isEmpty() {
        return dq.empty();
    }
    
    bool isFull() {
        return dq.size() == n;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */

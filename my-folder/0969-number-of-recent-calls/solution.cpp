class RecentCounter {
public:
    pair<int, int> range;
    queue<int> calls;

    RecentCounter() {
        
    }
    
    int ping(int t) {
        int ans = 0;
        calls.push(t);
        while (calls.front() < t - 3000) {
            calls.pop();
        }
        return calls.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */ 

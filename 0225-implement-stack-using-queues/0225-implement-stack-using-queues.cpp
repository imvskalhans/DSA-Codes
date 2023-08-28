class MyStack {
public:
    
    queue <int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        //  Get previous size of queue
    int s = q.size();
 
    // Push the current element
    q.push(x);
 
    // Pop all the previous elements and put them after
    // current element
 
    for (int i = 0; i < s; i++) {
        // Add the front element again
        q.push(q.front());
 
        // Delete front element
        q.pop();
    }
    }
    
    int pop() {
        if (q.empty())
         return -1;
        else 
        {
            int ans = q.front();
            q.pop();
            return ans;
        }
        
        
    }
    
    int top() {
        return (q.empty()) ? -1 : q.front();
    }
    
    bool empty() {
        return (q.empty());
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
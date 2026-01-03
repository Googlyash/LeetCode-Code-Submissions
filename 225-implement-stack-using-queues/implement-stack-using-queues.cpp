// Stack Queue practice
// Jan'4, 2025 12:40 am

class MyStack {
    queue<int>q1, q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        if(q1.empty()){
            return -1;
        }
        int first= -1;
        while(!q1.empty()){
            first= q1.front();
            q1.pop();
            if(q1.empty()){
                break;
            }
            q2.push(first);
        }
        while(!q2.empty()){
            int first= q2.front();
            q2.pop();
            q1.push(first);
        }
        return first;
    }
    
    int top() {
        if(q1.empty()){
            return -1;
        }
        int first= -1;
        while(!q1.empty()){
            first= q1.front();
            q1.pop();
            q2.push(first);
        }
        while(!q2.empty()){
            int first= q2.front();
            q2.pop();
            q1.push(first);
        }
        return first;
    }
    
    bool empty() {
        return q1.empty();
    }
};

// Switch 2 preps
// 11 min
/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
//POTD Aug'28, 2023
//Aug'28, 2023 05:59 pm

class MyStack {
public:
    queue<int>q1,q2;
    MyStack() {
         
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        if(q1.empty()){
            return -1;
        }
        int ans=q1.front();
        while(!q2.empty()){
            q2.pop();
        }
        while(!q1.empty()){
            int t=q1.front();
            q1.pop();
            if(q1.empty()){
                ans=t;
                break;
            }
            q2.push(t);
        }
        q1=q2;
        return ans;
    }
    
    int top() {
        if(q1.empty()){
            return -1;
        }
        int ans=q1.front();
        while(!q2.empty()){
            q2.pop();
        }
        while(!q1.empty()){
            int t=q1.front();
            q1.pop();
            if(q1.empty()){
                ans=t;
            }
            q2.push(t);
        }
        q1=q2;
        return ans;
    }
    
    bool empty() {
        return q1.empty();
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
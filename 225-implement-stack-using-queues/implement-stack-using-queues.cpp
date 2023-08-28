//POTD Aug'28, 2023
//Aug'28, 2023 05:59 pm

class MyStack {
public:
    stack<int>st;
    MyStack() {
         
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        if(st.empty()){
            return -1;
        }
        else {
            int t=st.top();
            st.pop();
            return t;
        }
    }
    
    int top() {
        if(st.empty()){
            return -1;
        }
        else {
            return st.top();
        }
    }
    
    bool empty() {
        return st.empty();
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
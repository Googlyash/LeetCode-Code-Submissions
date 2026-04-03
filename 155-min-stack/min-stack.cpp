// Apr'3, 2026 03:06 pm
// LLD Practice

class MinStack {
    stack<int>st, monoSt;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(monoSt.empty() || monoSt.top()>= val){
            monoSt.push(val);
        }
        return;
    }
    
    void pop() {
        
        if(!st.empty() && !monoSt.empty() && monoSt.top()== st.top()){
            monoSt.pop();
        }
        if(!st.empty()){
            st.pop();
        }
        return;
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return monoSt.top();
        
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

// 9 min
// Earlier Solved, couldn't this time
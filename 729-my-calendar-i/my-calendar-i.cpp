//Oct'11, 2023 04: 34 pm

class MyCalendar {
    map<int, int>events;
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        auto l=events.upper_bound(start);

        if(l!=events.end() && l->second < end){
            return false;
        }
        events[end]=start;
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */

 //Comments
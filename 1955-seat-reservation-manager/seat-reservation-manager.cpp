//POTD Nov'7, 2023
//Nov'7, 2023 04:00 pm

class SeatManager {
    vector<int>seat;
    priority_queue< int, vector<int>, greater<int>>pq;
public:
    SeatManager(int n) {
        this->seat.resize(n);
        for(int i=1;i<=n;i++){
            this->pq.push(i);
        }
    }
    
    int reserve() {
        int idx=pq.top();
        seat[idx-1]=1;
        pq.pop();
        return idx;
    }
    
    void unreserve(int seatNumber) {
        seat[seatNumber-1]=0;
        pq.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
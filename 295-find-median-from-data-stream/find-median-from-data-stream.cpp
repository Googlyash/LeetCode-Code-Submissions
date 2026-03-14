// Mar'14, 2026 02:56 pm
// Company practice - chs

class MedianFinder {
    priority_queue<int>mx;
    priority_queue<int, vector<int>, greater<int>>mn;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        int mxi= INT_MIN, mni= INT_MAX;
        if(!mx.empty()){
            mxi= mx.top(); 
        }
        if(!mn.empty()){
            mni= mn.top();
        }

        if((mx.size()%2 == 0 && mn.size()%2==0) || (mx.size()%2 == 1 && mn.size()%2==1)){
            if(mni < num){
                mx.push(mni);
                mn.pop();
                mn.push(num);
            }
            else {
                mx.push(num);
            }
        }
        else {
            if(mxi > num){
                mn.push(mxi);
                mx.pop();
                mx.push(num);
            }
            else {
                mn.push(num);
            }
        }
        return;
    }
    
    double findMedian() {
        int n= mx.size(), m= mn.size();
        if(n==0){
            return -1.00;
        }
        if((n+m)%2 == 1){
            return mx.top();
        }
        return (double)(double(mx.top() + mn.top())/ 2.00);
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */

 // 14 min
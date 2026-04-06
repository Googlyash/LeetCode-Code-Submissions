// Apr'6, 2026 11:10 pm
// LLD Practice

class ZeroEvenOdd {
private:
    int n;
    mutex mtx;
    condition_variable cv;
    int cnt=0, oddN=1, evenN=2;
public:
    ZeroEvenOdd(int n) {
        this->n = n;

    }

    // printNumber(x) outputs "x", where x is an integer.
    void zero(function<void(int)> printNumber) {
        while(true){
            unique_lock<mutex> lock(mtx);
            cv.wait(lock, [this]{ return cnt%2 == 0 || cnt>=2*n; });
            if (cnt >= 2*n) return;
            printNumber(0);

            cnt++;
            cv.notify_all();
        }
    }

    void even(function<void(int)> printNumber) {
        while(true){
            unique_lock<mutex> lock(mtx);
            cv.wait(lock, [this]{ return cnt%4 == 3 || cnt>=2*n; });
            if (cnt >= 2*n) return;
            printNumber(evenN);
            evenN+=2;
            cnt++;
            cv.notify_all();
        }
    }

    void odd(function<void(int)> printNumber) {
        while(cnt< 2*n){
            unique_lock<mutex> lock(mtx);
            cv.wait(lock, [this]{ return cnt%4 == 1 || cnt>=2*n; });
            if (cnt >= 2*n) return;
            printNumber(oddN);

            oddN+=2;
            cnt++;
            cv.notify_all();
        }
    }
};

// 25 min
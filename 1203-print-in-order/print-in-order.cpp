// Apr'5, 2026 12:49 am
// LLD Practice

class Foo {
    mutex mtx;
    condition_variable first_not_done;
    condition_variable second_not_done;
    int cnt=0;
public:
    Foo() {
        
        mtx.lock();
        mtx.unlock();
    }

    void first(function<void()> printFirst) {
        
        unique_lock<mutex> lock(mtx);
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        cnt++;

        first_not_done.notify_one();
        lock.unlock();
    }

    void second(function<void()> printSecond) {
        
        unique_lock<mutex> lock(mtx);
        while(cnt==0){
            first_not_done.wait(lock);
        }
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();

        cnt++;
        second_not_done.notify_one();
        lock.unlock();
    }

    void third(function<void()> printThird) {
        
        unique_lock<mutex> lock(mtx);
        while(cnt<=1){
            second_not_done.wait(lock);
        }
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
        
        lock.unlock();
    }
};

// 11 min
// Done after reading producer-consumer problem.
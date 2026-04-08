// Apr'9, 2026 03:15 am
// LLD Practice

class FizzBuzz {
private:
    int n;
    mutex mtx;
    condition_variable cv;
    int i=1;
public:
    FizzBuzz(int n) {
        this->n = n;
    }

    // printFizz() outputs "fizz".
    void fizz(function<void()> printFizz) {
        while(true){
            unique_lock<mutex> lck(mtx);

            cv.wait(lck, [this]{ return (i%3==0 && i%5!=0) || i>n;});
            if(i>n){
                return;
            }
            printFizz();
            i++;
            cv.notify_all();
        }
    }

    // printBuzz() outputs "buzz".
    void buzz(function<void()> printBuzz) {
        while(true){
            unique_lock<mutex> lck(mtx);

            cv.wait(lck, [this]{ return (i%3!=0 && i%5==0) || i>n;});
            if(i>n){
                return;
            }
            printBuzz();
            i++;
            cv.notify_all();
        }
    }

    // printFizzBuzz() outputs "fizzbuzz".
	void fizzbuzz(function<void()> printFizzBuzz) {
        while(true){
            unique_lock<mutex> lck(mtx);

            cv.wait(lck, [this]{ return (i%3==0 && i%5==0) || i>n;});
            if(i>n){
                return;
            }
            printFizzBuzz();
            i++;
            cv.notify_all();
        }
    }

    // printNumber(x) outputs "x", where x is an integer.
    void number(function<void(int)> printNumber) {
        while(true){
            unique_lock<mutex> lck(mtx);

            cv.wait(lck, [this]{ return (i%3!=0 && i%5!=0) || i>n;});
            if(i>n){
                return;
            }
            printNumber(i);
            i++;
            cv.notify_all();
        }
    }
};

// 21 min
// Had to take help
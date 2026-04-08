// Apr'9, 2026 03:37 am
// LLD Practice

class DiningPhilosophers {
    vector<bool>fork;
    mutex mtx;
    condition_variable cv;
public:
    DiningPhilosophers() {
        fork.resize(5, false);
    }

    void wantsToEat(int philosopher,
                    function<void()> pickLeftFork,
                    function<void()> pickRightFork,
                    function<void()> eat,
                    function<void()> putLeftFork,
                    function<void()> putRightFork) {
		
        int l= (philosopher+4)%5;
        int r= philosopher;

        unique_lock<mutex> lck(mtx);
        cv.wait(lck, [this, l, r]{ return (fork[l]==false && fork[r]== false) ;});

        fork[l]= true,fork[r]= true;
        lck.unlock();
        pickLeftFork();
        pickRightFork();
        eat();
        putLeftFork();
        putRightFork();

        lck.lock();
        fork[l]= false,fork[r]= false;
        cv.notify_all();
    }
};

// 20 min
// Basic errors;
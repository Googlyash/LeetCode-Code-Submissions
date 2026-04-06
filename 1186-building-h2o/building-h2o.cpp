// Apr'6, 2026 11:31 pm
// LLD Practice 

class H2O {
    int cnt=0;
    sem_t sem_h, sem_o;
public:
    H2O() {
        sem_init(&sem_h, 0, 1);
        sem_init(&sem_o, 0, 0);
    }

    void hydrogen(function<void()> releaseHydrogen) {
        sem_wait(&sem_h);
        // releaseHydrogen() outputs "H". Do not change or remove this line.
        releaseHydrogen();
        cnt++;
        if(cnt%2==1){
            sem_post(&sem_h);
        }
        else {
            sem_post(&sem_o);
        }
    }

    void oxygen(function<void()> releaseOxygen) {
        
        sem_wait(&sem_o);
        // releaseOxygen() outputs "O". Do not change or remove this line.
        releaseOxygen();

        sem_post(&sem_h);
    }
};

// 7 min
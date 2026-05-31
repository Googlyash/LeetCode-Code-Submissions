// POTD May'31, 2026
// Jun'1, 2026 12:42 am

class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int n= asteroids.size();

        long long cur= mass;
        sort(asteroids.begin(), asteroids.end());
        for(auto it: asteroids){
            if(cur>= it){
                cur+=it;
            }
            else {
                return false;
            }
        }
        return true;
    }
};

// 2 min
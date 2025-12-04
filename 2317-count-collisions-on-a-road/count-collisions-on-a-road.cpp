// POTD Dec'4, 2025
// Dec'5, 2025 01:59 am

class Solution {
public:
    int countCollisions(string directions) {
        int stop=0;
        int right=0;
        int ans=0;
        for (char c: directions){
            switch(c){
                case 'L':
                    ans += stop + right;
                    stop = stop || right;
                    right = 0;
                break;
                case 'R':
                    ++right;
                    stop = 1;
                break;
                case 'S':
                    ans += right;
                    right = 0;
                    stop = 1;
                break;
            }
        }
        return ans;
    }
};

//Comments
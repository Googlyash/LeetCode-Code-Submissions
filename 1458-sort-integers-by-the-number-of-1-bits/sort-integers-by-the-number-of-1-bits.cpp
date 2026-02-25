// POTD Feb'25, 2026
// Feb'25, 2026 09:33 pm

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n= arr.size();

        sort(arr.begin(), arr.end(), [](int a, int b){
            return ((__builtin_popcount(a) != __builtin_popcount(b)) ? (__builtin_popcount(a) < __builtin_popcount(b)) : a <b);
        });

        return arr;
    }
};

// 5 min
//POTD Mar'14, 2024
//Mar'14, 2024 11:40 pm

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> c({{0, 1}});
        int psum = 0, res = 0;
        for (int i : nums) {
            psum += i;
            res += c[psum - goal];
            c[psum]++;
        }
        return res;
    }
};

//Comments
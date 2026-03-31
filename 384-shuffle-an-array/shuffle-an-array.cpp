// Mar'31, 2026 11:55 pm
// LLD Practice

class Solution {
private:
    vector<int>shuf;
    vector<int>orig;

    int genRand(int n){
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<> dis(0, n);

        int rand= dis(gen);
        return rand;
    }
public:
    Solution(vector<int>& nums) {
        int n= nums.size();
        orig.resize(n, 0);
        for(int i=0;i<n;i++){
            orig[i]= nums[i];
        }
        shuf= orig;
    }
    
    vector<int> reset() {
        return orig;
    }
    
    vector<int> shuffle() {
        int n= shuf.size();
        unordered_map<int, int>mp;
        vector<int>cur= shuf;
        for(int i=0;i<n;i++){
            int random= genRand(n);
            while(mp[random]!=0){
                random= genRand(n);
            }
            cur[i]= shuf[random];
            mp[random]=1;
            // cout<<random<<endl;
        }
        return shuf= cur;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */

 // 15 min
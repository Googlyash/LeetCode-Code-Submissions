//Striver SDE Sheet day 4
//Aug'14, 2023 11:40 pm
//Striver's Solution

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int mx=0;
        unordered_set<int>st(nums.begin(), nums.end());
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int cnt=1;
                int cur=it;
                while(st.find(++cur)!=st.end()){
                    cnt++;
                }
                mx=max(mx, cnt);
            }
        }
        return mx;
    }
};
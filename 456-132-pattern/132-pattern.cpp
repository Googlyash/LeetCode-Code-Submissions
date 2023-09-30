//POTD Sep'30, 2023
//Sep'30, 2023 01:47 pm

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n+1, 1e9);
        for(int i=0;i<n;i++){
            pre[i+1]=min(pre[i], nums[i]);
        }
        set<int>st;
        st.insert(nums[n-1]);
        for(int i=n-2; i>=0;i--){
            auto it=st.lower_bound(nums[i]);
            if(it!=st.begin()){
                it--;
                if(pre[i]< *it){
                    return true;
                }
            }
            st.insert(nums[i]);
        }
        // int mn=INT_MIN;
        // stack<int>st;
        // for(int i=n-1; i>=0; i--){
        //     if(mn>nums[i]){
        //         return true;
        //     }
        //     else {
        //         while(!st.empty() && st.top()<nums[i]){
        //             mn=st.top();
        //             st.pop();
        //         }
        //     }
        //     st.push(nums[i]);
        // }
        return false;
    }
};
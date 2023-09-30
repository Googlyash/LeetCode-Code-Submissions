//POTD Sep'30, 2023
//Sep'30, 2023 01:47 pm

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        int mn=INT_MIN;
        stack<int>st;
        for(int i=n-1; i>=0; i--){
            if(mn>nums[i]){
                return true;
            }
            else {
                while(!st.empty() && st.top()<nums[i]){
                    mn=st.top();
                    st.pop();
                }
            }
            st.push(nums[i]);
        }
        return false;
    }
};
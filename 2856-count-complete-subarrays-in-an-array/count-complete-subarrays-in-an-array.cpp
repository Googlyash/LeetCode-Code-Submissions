// POTD Apr'24, 2025
// Apr'24, 2025 10:54 pm

class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n=nums.size(), ans=0;
        set<int>st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        
        for(int i=0;i<n;i++){
            set<int>s;
            for(int j=i;j<n;j++){
                s.insert(nums[j]);
                if(s.size()==st.size())ans++;
            }
        }
        return ans;
    }
};

// Earlier solved
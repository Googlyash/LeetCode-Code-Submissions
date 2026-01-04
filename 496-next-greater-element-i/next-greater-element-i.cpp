// Stack and Queues practice
// Jan'4, 2026 10:48 pm

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n= nums2.size();
        
        vector<int>ans(nums1.size(), -1);
        for(int j=0;j<nums1.size(); j++){
            int it= nums1[j];
            bool check= false;
            for(int i=0;i<n;i++){
                if(nums2[i]== it){
                    check= true;
                }
                if(check && nums2[i]> it){
                    ans[j]=nums2[i];
                    break;
                }
            }
        }

        return ans;
    }
};

// Switch 2
// 5 min
// POTD Sep'3, 2026
// Sep'3, 2026 07:06 pm

class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n= nums1.size();

        int eve=0, od=0;
        for(auto it: nums1){
            if(it%2==0){
                eve++;
            }
            else {
                od++;
            }
        }
        if(min(eve,od)==0){
            return true;
        }
        int mn= *(ranges::min_element(nums1));
        if(!(mn%2)){
            return false;
        }
        return true;
    }
};

// 12 min
// POTD Jan'16, 2025
// Jan'16, 2025 12:03 pm

class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size(), m= nums2.size();
        int xor1= 0, xor2=0;
        for(auto it:nums1){
            xor1^=it;
        }
        for(auto it:nums2){
            xor2^=it;
        }

        int ans=0;
        cout<<xor1<<" "<<xor2<<endl;
        if(n%2==0 && m%2==0){
            ans=0;
        }
        else if(n%2==0){
            ans= xor1;
        }
        else if(m%2==0){
            ans= xor2;
        }
        else {
            ans= xor1^xor2;
        }
        return ans;
    }
};

// 9 min
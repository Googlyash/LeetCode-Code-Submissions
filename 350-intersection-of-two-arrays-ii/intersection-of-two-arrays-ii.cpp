//POTD Jul'2, 2024
//Jul'2, 2024 10:35 pm

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(), m=nums2.size();
        vector<int>v;
        map<int, int>mp;
        for(int i=0;i<n;i++){
            for(int j=mp[nums1[i]]; j<m;j++){
                if(nums2[j]==nums1[i]){
                    v.push_back(nums1[i]);
                    mp[nums1[i]]=j+1;
                    break;
                }
            }
        }
        return v;
    }
};
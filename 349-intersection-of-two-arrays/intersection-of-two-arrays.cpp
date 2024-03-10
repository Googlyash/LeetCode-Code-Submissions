//POTD Mar'10, 2024
//Mar'10, 2024 10:14 pm

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int>v;
        int i=0, j=0, n=nums1.size(), m=nums2.size();
        while(i<n && j<m){
            if(nums1[i]==nums2[j]){
                if(!v.size() || nums1[i]!=v[v.size()-1])v.push_back(nums1[i]);
                i++, j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else {
                j++;
            }
        }
        return v;
    }
};
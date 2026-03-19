// Mar'19, 2026 11:59 pm
// Binary Search Practice

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n= arr.size();
        
        int l=0, r=n-1;
        while(l<=r){
            int mid= l+ (r-l)/2;

            // if(mid==n-1){
            //     return mid+1+k;
            // }
            if(arr[mid]< mid+1+k){
                l=mid+1;
            }
            else {
                r=mid-1;
            }
        }
        return r + k +1;
    }
};

// 14 min
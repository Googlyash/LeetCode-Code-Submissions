class Solution {
public:
    bool search(vector<int>& arr, int k) {
        int n=arr.size();
        int l=0,r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;

            if(arr[mid]==k)return 1;

            if(arr[mid]==arr[l] && arr[mid]==arr[r]){
                r--;
                l++;
                continue;
            }
            if (arr[l]<=arr[mid]){
                if(arr[l]<=k && k<=arr[mid])
                r=mid-1;
                else l=mid+1;
            }
            else {
                if(arr[mid]<=k && k<=arr[r])
                l=mid+1;
                else r=mid-1;
            }
        }
        
        return 0;
    }
};
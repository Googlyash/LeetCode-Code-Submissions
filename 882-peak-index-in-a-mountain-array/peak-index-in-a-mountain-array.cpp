//POTD July'25, 2023
//Comments

class Solution {
public:
    int peakIndexInMountainArray(vector<int> a) {
       int n=a.size();
       int l=0, r=n-1;
       while(l<=r){
           int mid=l+(r-l)/2;

           if(a[mid]<a[mid+1]){
               l=mid+1;
           }
           else {
               r=mid-1;
           }
       }
       return l;
    }
};
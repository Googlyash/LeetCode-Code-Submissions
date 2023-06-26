//Striver: BinarySearch
//Self-Solved

class Solution {
public:
    int divsum(vector<int>&a, int div){
        int ans=0;
        for(int i=0;i<a.size();i++){
            ans+=ceil((double)a[i]/(double)div);
        }
        return ans;
    }
    int smallestDivisor(vector<int>& a, int limit) {
        int n=a.size();
        int mn=INT_MAX, mx= INT_MAX;
        for(int i=0;i<n;i++){
            mn=min(mn,a[i]);
            mx=max(mx,a[i]);
        }
        int l=1,r=mx;
        while(l<=r){
            int mid=l+(r-l)/2;

            int dsum= divsum(a,mid);
            if(dsum<=limit){
                r=mid-1;
            }
            else {
                l=mid+1;
            }
        }
        return l;
    }
};
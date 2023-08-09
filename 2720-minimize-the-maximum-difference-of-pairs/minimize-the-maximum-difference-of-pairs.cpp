//POTD Aug'9, 2023 11:30 pm
//Intution from discussion

class Solution {
public:
    int minimizeMax(vector<int>& arr, int p) {
        int n=arr.size();
        if(n<2)return 0;
        unordered_map<int, int> mp;
        sort(arr.begin(), arr.end());
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int r=arr[n-1]-arr[0], l=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            int cnt=0;
            for(int i=1;i<n;i++){
                if(arr[i]-arr[i-1]<=mid){
                    cnt++;
                    i++;
                }
            }
            if(cnt<p){
                l=mid+1;
            }
            else {
                r=mid-1;
            }
        }
        return l;
    }
};
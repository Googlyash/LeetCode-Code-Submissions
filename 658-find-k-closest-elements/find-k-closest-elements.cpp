// Jan'16, 2025 10:05 am

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();

        sort(arr.begin(), arr.end());
        auto it= lower_bound(arr.begin(), arr.end(), x)- arr.begin();
        vector<int>ans;
        int l=it-1, r= it;
        // cout<<l<<" "<<r;

        while(l>=0 && r<n && k){
            if(abs(x-arr[l])<= abs(arr[r]-x)){
                ans.push_back(arr[l]);
                l--;
            }
            else if(abs(x-arr[l])> abs(arr[r]-x)){
                ans.push_back(arr[r]);
                r++;
            }
            k--;
        }
        while(k>0){
            if(l>=0){
                ans.push_back(arr[l]);
                l--;
            }
            else if(r<n){
                ans.push_back(arr[r]);
                r++;
            }
            k--;
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// 10 min
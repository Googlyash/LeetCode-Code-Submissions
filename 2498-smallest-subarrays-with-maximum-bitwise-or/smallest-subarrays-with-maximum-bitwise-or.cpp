// POTD Jul'29, 2025
// Jul'29, 2025 10:18 pm

class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n= nums.size();

        string s;
        vector<vector<int>>v(n+1, vector<int>(32, 0));
        for(int i=n-1;i>=0;i--){
            int it= nums[i], j=0;
            v[i]=v[i+1];
            while(it){
                v[i][j]+= it%2;
                j++;
                it/=2;
            }
        }


        vector<vector<int>>bits(n, vector<int>(32, 0));
        vector<int>ans(n, 0);
        int l=0, r=0;
        for(int l=0;l<n;l++){
            if(l){
                bits[l]=bits[l-1];
                int it= nums[l-1];
                int j=0;
                while(it){
                    bits[l][j]-= (it%2);
                    j++;
                    it/=2;
                }
            }

            while(r<n){
                int cnt=0;
                for(int i=0;i<32;i++){
                    if(!v[l][i]== !bits[l][i]){
                        cnt++;
                    }
                }
                if(cnt==32){
                    break;
                }
                int it= nums[r], j=0;
                while(it){
                    bits[l][j]+= it%2;
                    j++;
                    it/=2;
                }
                r++;
            }
            ans[l]=max(1, r-l);
        }
        return ans;
    }
};

// 38 min
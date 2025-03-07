// POTD Mar'7, 2025
// Mar'7, 2025 10:45 pm

class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        int mn= -1, mx=-1;
        vector<int>ans(2, -1);
        vector<int>v(right+2, 0);
        for(int i=2;i<=right; i++){
            long long k=i;
            for(int j=i+i; j<=right; j+=i){
                v[j]=1;
            }
        }
        vector<int>pri;
        for(int i=2;i<v.size();i++){
            if(v[i]==0){
                pri.push_back(i);
            }
        }
        int mndif= 1e9;
        for(int i=0;i<pri.size()-1;i++){
            if(mndif>pri[i+1]-pri[i] && left<=pri[i] && pri[i+1]<=right){
                ans[0]=pri[i], ans[1]= pri[i+1];
                mndif= pri[i+1]-pri[i];
            }
        }

        return ans;
    }
};

// 15 min
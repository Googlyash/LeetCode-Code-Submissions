// POTD Jan'14,2025
// Jan'14, 2025 05:24 pm

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n= A.size(), m= B.size();

        vector<int>ans( max(m,n), 0);
        map<int, int>mp1, mp2;
        for(int i=0;i< min(m,n);i++){
            mp1[A[i]]++;
            mp2[B[i]]++;
            for(int j=0;j<= i; j++){
                if(mp2[A[j]] && mp1[A[j]]){
                    ans[i]++;
                }
            }
        }
        if(m>n){
            for(int i=n;i< m;i++){
                mp2[B[i]]++;
                for(int j=0; j<=i; j++){
                    if(mp2[B[j]] && mp1[B[j]]){
                        ans[i]++;
                    }
                }
            }
        }
        else {
            for(int i=m;i<n;i++){
                mp1[A[i]]++;
                for(int j=0;j<= i; j++){
                    if(mp2[A[j]] && mp1[A[j]]){
                        ans[i]++;
                    }
                }
            }
        }

        return ans;
    }
};


// 8 min
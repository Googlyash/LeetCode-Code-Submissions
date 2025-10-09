// POTD Oct'9, 2025
// Oct'10, 2025 12:13 am

class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        int n= skill.size(), m= mana.size();

        vector<long long>pre(n, 0);
        for(int i=0;i<n;i++){
            pre[i]= 1LL*skill[i]* mana[0];
            pre[i]+= (i>0) ? pre[i-1] : 0;
        }
        for(int i=1; i<m;i++){
            long long strt= pre[0], cnt=0;
            for(int j=0;j<n-1;j++){
                cnt+= 1LL*mana[i]* skill[j];
                strt= max(strt, pre[j+1]- cnt);
            }
            for(int j=0;j<n;j++){
                pre[j]=  1LL*mana[i]* skill[j];
                pre[j]+= (j>0) ? pre[j-1] : strt;
            }
        }
        return pre[n-1];
    }
};

// 30 min
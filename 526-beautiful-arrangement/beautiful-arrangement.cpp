//Aug'29, 2023 04:30 pm
//Seems much confusing
//Comments

class Solution {
private:
    int solve(int &cnt, int idx, int n, map<int, int>&mp){
        if(idx>n)return cnt++;

        for(int i=1;i<=n;i++){
            if(!mp[i] && (idx%i==0 || i%idx==0)){
                mp[i]=1;
                solve(cnt, idx+1, n, mp);
                mp[i]=0;
            }
        }
        cout<<cnt<<endl;
        return cnt;
    }
public:
    int countArrangement(int n) {
        int ans=0;
        map<int, int>mp;
        for(int i=0;i<n;i++){
            mp[i+1]=0;
        }
        return solve(ans, 1, n, mp);
    }
};
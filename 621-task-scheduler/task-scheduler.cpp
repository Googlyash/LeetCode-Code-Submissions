//POTD Mar'19, 2024
//Mar'19. 2024 09:58 pm

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int sz= tasks.size(), cnt=0;
        vector<int>v(26, 0);

        for(auto it:tasks){
            v[it-'A']++;
        }
        sort(v.begin(), v.end());
        for(int i=25; i>=0; i--){
            if(v[i]==v[25]){
                cnt++;
            }
            else {
                break;
            }
        }
        int ans= (v[25]-1)*(n+1)+cnt;
        return max(ans, sz);
    }
};
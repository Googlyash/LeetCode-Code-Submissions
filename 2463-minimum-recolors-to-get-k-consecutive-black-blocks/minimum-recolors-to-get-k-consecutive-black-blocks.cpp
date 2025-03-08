// POTD Mar'8, 2025
// Mar'8, 2025 11:55 pm

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n= blocks.size();
        int mn= 0, ans=n;

        for(int i=0;i<n;i++){
            mn+= blocks[i]=='W';
            if(i<k-1){
                continue;
            }

            if(i>=k)mn-= blocks[i-k]=='W';
            ans=  min(ans, mn);
        }

        ans=  min(ans, mn);
        return ans;
    }
};

// 8 min
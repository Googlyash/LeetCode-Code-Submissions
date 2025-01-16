// Jan'16, 2025 06:43 pm

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n= spells.size(), m= potions.size();

        sort(potions.begin(), potions.end());
        vector<int>ans(n, 0);
        for(int i=0;i<n;i++){
            long long cur= spells[i];

            int l=0, r=m-1;
            while(l<=r){
                long long mid= l+ (r-l)/2;
                long long potion= potions[mid]*cur;

                if(potion<success){
                    l= mid+1;
                }
                else {
                    r=mid-1;
                }
            }
            ans[i]= m-l;
        }

        return ans;
    }
};

// 9 min
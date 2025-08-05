// POTD Aug'5, 2025
// Aug'5, 2025 08:07 pm

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n= fruits.size();
        int ans=n;

        vector<int>isEmpty(n, 1);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(fruits[i]<= baskets[j] &&isEmpty[j]==1){
                    isEmpty[j]=0;
                    ans--;
                    break;
                }
            }
        }
        return ans;
    }
};

// 4 min
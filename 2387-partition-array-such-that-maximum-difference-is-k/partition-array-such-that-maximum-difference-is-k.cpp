// POTD Jun'19. 2025
// Jun'19, 2025 07:20 pm

class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n= nums.size();
        int ans=0, j=0;
        
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            while(i<n && nums[i]-nums[j]<=k){
                i++;
            }
            j=i;
            i--;
            ans++;
        }
        return ans;
    }
};

// 4 min
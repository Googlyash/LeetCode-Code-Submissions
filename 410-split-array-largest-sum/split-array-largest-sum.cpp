// Mar'20, 2026 12:35 am
// Binary Search Practice

class Solution {
private:
    bool checkPossible(vector<int>&nums, int k, int minSum){
        int n= nums.size();
        int cntDiv=0, curSum= 0;

        for(int i=0;i<n;i++){
            if(minSum < nums[i]){
                return false;
            }
            if(nums[i] + curSum > minSum){
                k--;
                curSum= 0;
            }
            curSum+= nums[i];
        }

        return k > 0;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int n= nums.size();

        int l= *min_element(nums.begin(), nums.end()), r= accumulate(nums.begin(), nums.end(), 0);
        while(l<=r){
            int mid= l + (r-l)/2;

            cout<<mid<<endl;
            if(!checkPossible(nums, k, mid)){
                l= mid+1;
            }
            else {
                r= mid-1;
            }
        }
        return l;
    }
};

// 16 min
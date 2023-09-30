//Sep'30,2023 06:20 am
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        long long i=0, j=0, sum=0, cnt=INT_MAX;
        while(j<n){
            sum+=nums[j];
            while(sum>target){
                cnt=min(cnt, j-i+1);
                sum-=nums[i++];
            }
            if(sum==target){
                cnt=min(cnt, j-i+1);
            }
            j++;
        }
        // return cnt;
        return (cnt>1e6)?0:cnt;
    }
};

//3.30 min
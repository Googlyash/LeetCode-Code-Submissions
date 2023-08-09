//Striver SDE Sheet: day 3
//Striver's Code
//Aug'9, 2023 08:47 pm

class Solution {
private:
    void mergeHelper(int l, int mid, int r, vector<int>&arr){
        vector<int>temp;

        int lt=l, rt= mid+1;
        while(lt<=mid && rt<=r){
            if(arr[lt]<= arr[rt]){
                temp.push_back(arr[lt++]);
            }
            else {
                temp.push_back(arr[rt++]);
            }
        }

        while(lt<=mid){
            temp.push_back(arr[lt++]);
        }
        while(rt<=r){
            temp.push_back(arr[rt++]);
        }

        for(int i=l; i<=r; i++){
            arr[i]=temp[i-l];
        }
    }
    long long cntHelper(int l, int mid, int r, vector<int>&arr){
        int rt=mid+1;
        long long cnt=0;
        for(int i=l;i<=mid; i++){
            long temp=arr[i];
            long cur=0;
            if(rt<=r)cur=arr[rt];
            while(rt<=r && temp>cur*2){
                rt++;
                if(rt<=r)cur=arr[rt];
            }
            cnt+=rt-mid-1;
        }
        return cnt;
    }
    long long merge(int l, int r, vector<int>&nums){
        long long cnt=0;
        if(l>=r){
            return cnt;
        }

        int mid=l+(r-l)/2;
        cnt+=merge(l, mid, nums);
        cnt+=merge(mid+1, r, nums);
        cnt+=cntHelper(l, mid, r, nums);
        mergeHelper(l, mid, r, nums);

        return cnt;
    }
public:
    int reversePairs(vector<int>& nums) {
        int n=nums.size(), mod=1e9+7;
        return merge(0, n-1, nums)%mod;
    }
};
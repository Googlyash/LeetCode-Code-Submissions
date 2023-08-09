//Striver SDE Sheet: day 3
//Striver's Code
//Aug'9, 2023 09:07 pm

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
    int cntHelper(int l, int mid, int r, vector<int>&arr){
        int rt=mid+1, mx=INT_MAX, mn=INT_MIN;
        int cnt=0;
        for(int i=l;i<=mid; i++){
            while(rt<=r && arr[i]>2L*arr[rt]){
                rt++;
            }
            cnt+=rt-mid-1;
        }
        return cnt;
    }
    int merge(int l, int r, vector<int>&nums){
        int cnt=0;
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
        int n=nums.size();
        return merge(0, n-1, nums);
    }
};
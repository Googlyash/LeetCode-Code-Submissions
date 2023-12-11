//POTD Dec'11, 2023
//Dec'11, 2023 01:04 pm

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size(), cnt=1, cur=1;
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[i-1]){
                cnt=max(cnt, cur);
                cur=1;
            }
            else {
                cur++;
            }
            if(cur>n/4){
                return arr[i];
            }
        }
        return arr[n-1];
    }
};

//2 mins
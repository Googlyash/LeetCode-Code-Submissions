//POTD Nov'5, 2023
///Nov'5, 2023 08:42 pm
class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n=arr.size();
        int cur=arr[0], cnt=0;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[0]){
                swap(arr[0], arr[i]);
                cnt=1;
            }
            else {
                cnt++;
            }
            if(cnt==k){
                return arr[0];
            }
        }
        return arr[0];
    }
};

//3 min
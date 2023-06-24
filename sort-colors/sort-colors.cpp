//Cooments
//Earlier Self-Solved
//Easy

class Solution {
public:
    void sortColors(vector<int>& arr) {
       int l=0,m=0,r=arr.size()-1;
        while(l<=r){
            if(arr[l]==0){
                swap(arr[l],arr[m]);
                l++;
                m++;
            }
            else if(arr[l]==1){
                l++;
            }
            else {
                swap(arr[l],arr[r]);
                r--;
            }
        }
    }
};
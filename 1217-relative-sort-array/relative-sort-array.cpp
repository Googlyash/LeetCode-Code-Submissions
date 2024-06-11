//POTD June'11, 2024
//June'11, 2024 11:32 pm

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size(), m=arr2.size(), l=0;
        map<int, int>mp;

        sort(arr1.begin(), arr1.end());
        for(auto it:arr1){
            mp[it]++;
        }

        vector<int>ans(n);

        for(int i=0; i<m;i++){
            while(mp[arr2[i]]){
                ans[l++]=arr2[i];
                mp[arr2[i]]--;
            }
        }
        for(auto it:arr1){
            if(find(arr2.begin(), arr2.end(), it)== arr2.end()){
                ans[l++]= it;
            }
        }
        return ans;
   }
};
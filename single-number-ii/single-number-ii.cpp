//POTD July'4, 2023

class Solution {
public:
    int singleNumber(vector<int>& a) {
        unordered_map<int,int>mp;
        for(int i=0;i<a.size();i++){
            mp[a[i]]++;
        }
        for(auto it:mp){
            if(it.second==1){
                return it.first;
            }
        }
        return -1;
    }
};
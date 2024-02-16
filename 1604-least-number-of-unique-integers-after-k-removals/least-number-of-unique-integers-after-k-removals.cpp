//POTD Feb'16, 2024
//Feb'16, 2024 12: pm

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n=arr.size(),ini=0;
        map<int,int>mp;
        vector<int>v;
        for(auto it:arr){
            mp[it]++;
        }
        for(auto it:mp){
            v.push_back(it.second);
        }
        sort(v.begin(), v.end());
        for(int i=0;i<v.size() && k>0; i++){
            if(v[i]<=k){
                k-=v[i];
                v[i]=0;
            }
            if(k==0){
                ini=i+1;
                break;
            }
            else if(v[i]>k){
                ini=i;
                break;
            }
        }
        return v.size()-ini;
    }
};

//6 min

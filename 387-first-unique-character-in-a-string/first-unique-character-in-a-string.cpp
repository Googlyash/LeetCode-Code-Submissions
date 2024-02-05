//POTD Feb'5, 2024
//Feb'5, 2024 10:58 pm

class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        map<char, int>mp;
        for(auto it:s){
            mp[it]++;
        }
        for(int i=0;i<n;i++){
            if(mp[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};

//3 min
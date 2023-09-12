//POTD Sep'12, 2023 02:22 pm

class Solution {
public:
    int minDeletions(string s) {
        int n=s.size(), ans=0;
        map<char, int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }

        unordered_set<int>usedFreq;
        for(auto it:mp){
            int freq=it.second;
            while(freq>0 && usedFreq.find(freq)!= usedFreq.end()){
                freq--;
                ans++;
            }
            usedFreq.insert(freq);
        }
        return ans;
    }
};

//Easlier Self done: 20Min
//Comments: Better Code
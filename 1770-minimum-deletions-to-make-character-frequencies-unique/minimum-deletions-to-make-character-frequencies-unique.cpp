//POTD Sep'12, 2023 02:22 pm

class Solution {
public:
    int minDeletions(string s) {
        int n=s.size(), ans=0;
        map<char, int>mp;
        map<int, int> mp1;
        sort(s.begin(), s.end());
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(auto it:mp){
            mp1[it.second]++;
            cout<<it.second<<" ";
        }
        cout<<endl;
        for(auto it:mp){
            int k=it.second;
            while(mp1[k]>1 && k!=0){
                mp1[k]--;
                k-=1;
                mp1[k]++;
                cout<<it.second<<" "<<k;
                ans++;
            }
        }
        cout<<s;
        return ans;
    }
};

//Self done: 20Min
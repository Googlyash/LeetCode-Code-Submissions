class Solution {
public:
    int minNumber(vector<int>& n1, vector<int>& n2) {
        sort(n1.begin(),n1.end());
        int k=0,l=0;
        sort(n2.begin(),n2.end());
        unordered_map<int,int>mp;
        for(int i=0;i<n1.size();i++)mp[n1[i]]++;
        for(int i=0;i<n2.size();i++)if(mp[n2[i]])return n2[i];
        k=min(n1[0],n2[0]);
        l=max(n1[0],n2[0]);
        return k*10+l;

    }
};
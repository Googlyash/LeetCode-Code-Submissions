//POTD Oct'11, 2023
//Oct'11, 2023 03:04 pm
//Using Difference Array

class Solution {
private:
    void update(vector<int>&d, int l, int r, int x){
        if(l>r){
            return;
        }
        d[l]+=x;
        d[r+1]-=x;
    }
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        int n=flowers.size(), m=people.size(), mod=1e9+7;
        int mx=0;
        
        vector<int> d(m+1, 0),p=people;
        map<int, int>mp;

        sort(people.begin(), people.end());
        for(auto it:flowers){
            int l=lower_bound(people.begin(), people.end(), it[0])-people.begin();
            int r=upper_bound(people.begin(), people.end(), it[1])-people.begin();
            cout<<l<<" "<<r<<endl;
            update(d, l, r-1, 1);
        }
        d.pop_back();
        // print(d, d);
        for(int i=1;i<d.size(); i++){
            d[i]+=d[i-1];
            mp[people[i]]=d[i];
        }
        mp[people[0]]=d[0];
        vector<int>ans;
        for(int i=0;i<m;i++){
            // cout<<p[i].second;
            ans.push_back(mp[p[i]]);
        }
        return ans;
    }
};
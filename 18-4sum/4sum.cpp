//Striver Day4: Arrays Part-IV
//Self-solved (ideataken from 3sum question)
//Gand fat gai bhai \U0001f623
//wierd

#define ll long long
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int target) {
        int n=a.size();
        sort(a.begin(), a.end());
        set<vector<int>>st;
        vector<vector<int>>v;
        long long ans=target;
        for(int i=0;i<n;i++){
            ans=target-a[i];
            for(int j=i+1;j<n;j++){
                ans-=a[j];
                for(int k=j+1;k<n;k++){
                    ans-=a[k];
                    int ldx=lower_bound(a.begin()+k+1, a.end(), ans)-a.begin();
                    if(ldx<n && ldx>k && a[ldx]==ans){
                        st.insert({a[i], a[j], a[k], a[ldx]});
                    }
                    ans+=a[k];
                }
                ans+=a[j];
            }
        }
        for(auto it:st){
            v.push_back(it);
        }
        return v;
    }
};
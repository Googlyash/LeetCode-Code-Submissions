//POTD Sep'13, 2023
//Sep'13, 2023 10:23 pm

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        int ans=0;
        vector<int>v(n, 1);
        vector<pair<int, int>>vp;
        for(int i=0;i<n;i++){
          vp.push_back({ratings[i], i});
        }
        sort(vp.begin(), vp.end());
        for(int i=0;i<n;i++){
          int cur=vp[i].second;
          if(cur <n-1){
            if(ratings[cur]>ratings[cur+1] && v[cur]<=v[cur+1]){
              v[cur]=v[cur+1]+1;
            }
          }
          if(cur>0){
            if(ratings[cur]>ratings[cur-1] && v[cur]<=v[cur-1]){
              v[cur]=v[cur-1]+1;
            }
          }
          if(cur <n-1){
            if(ratings[cur]>ratings[cur+1] && v[cur]<=v[cur+1]){
              v[cur]=v[cur+1]+1;
            }
          }
        }

        for(int i=0;i<n;i++){
          cout<<v[i]<<" ";
        }
        for(auto it: v){
          ans+=it;
        }
        return ans;
    }
};

//28 min
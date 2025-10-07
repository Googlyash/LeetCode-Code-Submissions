// POTD Oct'7, 2025
// Oct'7, 2025 10:57 pm

class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n= rains.size();

        int cnt=0;
        unordered_map<int, int>rain;
        vector<int>ans(n, 1);
        set<int>dryDay;
        for(int i=0;i<n;i++){
            if(rains[i]==0){
                dryDay.insert(i);
                continue;
            }
            int lake= rains[i];
            auto it= rain.find(lake);
            if(it!= rain.end()){
                int prev= it->second;
                auto it1= dryDay.lower_bound(prev);
                if(it1==dryDay.end()){
                    return {};
                }
                int day= *it1;
                ans[day]= lake;
                dryDay.erase(it1);
            }
            rain[lake]= i;
            ans[i]=-1;
        }
        return ans;
    }
};

// Comments
// 18 min
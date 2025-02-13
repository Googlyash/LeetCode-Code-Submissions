// POTD Feb'13, 2025
// Feb'13, 2025 11:48 pm

#define ll long long
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n= nums.size();
        priority_queue<ll, vector<ll>, greater<ll>>pq;
        for(auto it:nums){
            pq.push(it);
        }

        // cout<<INT_MAX<<endl;
        ll ans=0;
        while(!pq.empty() && pq.top()<k){
            ll fst= pq.top();

            pq.pop();
            ll scnd;
            if(!pq.empty()){
                scnd = pq.top();
                pq.pop();
            }
            ll mn= min(fst, scnd);
            ll mx= max(fst, scnd);
            pq.push(mn*2+mx);
            ans++;
        }

        return ans;
    }
};

// 8 min